#pragma once

#include <string>
#include "TNode.h";
#include <set>

using namespace std;

class Variable {
public:

	// constructor
	Variable(const string& varName);

	// getters
	const string& getName();
	set<int>& getUsedByStmts();
	set<int>& getModifiedByStmts();
	set<TNode*>& getTNodes();

	// setters


private:
	string _name;
	set<int> _usedBy;
	set<int> _modifiedBy;
	set<TNode*> _nodes;
};
