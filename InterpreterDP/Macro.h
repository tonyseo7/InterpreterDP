#pragma once
#include "ToneExpression.h"
#include "SatuExpression.h"
#include "BrightExpression.h"

class Macro
{
	Expression *head;
	Expression *tail;
	string context;

public:
	Macro(void);
	void AddExpression(Expression *expression);
	void ChangePicture(Picture *picture);
	void AddContext(string context);
};
