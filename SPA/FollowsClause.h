#pragma once
#include "Clause.h"

class FollowsClause : public Clause
{
public:
	FollowsClause(void);
	~FollowsClause(void);
private:
	bool checkValidFollows(void);

};
