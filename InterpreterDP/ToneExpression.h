#pragma once

#include "Expression.h"

class ToneExpression : public Expression
{
	int value;

public:
	virtual string Interpret(string context);

	virtual void DoItWithPicture(Picture *picture);

};
