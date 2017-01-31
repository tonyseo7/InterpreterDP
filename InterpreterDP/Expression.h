#pragma once
#include "Picture.h"

class Expression
{
	Expression *next;
	
public:
	Expression() { next = 0; }

	virtual string Interpret(string context) = 0;

	virtual void DoItWithPicture(Picture *picture);

	void SetNext(Expression *next);

protected:
	string NextInterpret(string context);

};
