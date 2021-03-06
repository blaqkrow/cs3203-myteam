#pragma once
#include "Results.h"
#include <vector>
#include <string>
#include <map>

using std::vector;
using std::map;
using std::string;

enum ClauseType{
	FOLLOWS_, 
	FOLLOWSSTAR_, 
	PARENT_, 
	PARENTSTAR_, 
	USES_, 
	MODIFIES_, 
	PATTERN_
};

class Clause {
protected:
	ClauseType clauseType;
	string firstArg;
	bool firstArgFixed;
	string firstArgType;
	string secondArg;
	bool secondArgFixed;
	string secondArgType;
	string patternArg;

	
public:
	Clause(void);
	Clause(ClauseType);
	~Clause(void);

	ClauseType getClauseType();
	void setFirstArg(string);
	void setSecondArg(string);
	void setFirstArgType(string);
	void setSecondArgType(string);
	void setFirstArgFixed(bool);
	void setSecondArgFixed(bool);

	string getFirstArg();
	string getSecondArg();
	string getFirstArgType();
	string getSecondArgType();
	bool getFirstArgFixed();
	bool getSecondArgFixed();

	virtual Results evaluate()=0; 
	virtual bool isValid()=0;
	
};
