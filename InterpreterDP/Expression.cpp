#include "stdafx.h"
#include "Expression.h"


void Expression::DoItWithPicture(Picture *picture)
{

	if (next)
	{
		next->DoItWithPicture(picture);
	}

}

void Expression::SetNext(Expression *next)
{
	this->next = next;
}


string Expression::NextInterpret(string context)
{
	if (next)
	{
		return next->Interpret(context);
	}

	return context;
}