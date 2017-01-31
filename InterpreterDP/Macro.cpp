#include "stdafx.h"
#include "Macro.h"

Macro::Macro(void)
{
	head = tail = 0;
}


void Macro::AddExpression(Expression *expression)
{
	if (head)
	{
		tail->SetNext(expression);
		tail = expression;
	}
	else
	{
		head = tail = expression;
	}
}


void Macro::ChangePicture(Picture *picture)
{
	head->DoItWithPicture(picture);
}


void Macro::AddContext(string context)
{
	head->Interpret(context);
}