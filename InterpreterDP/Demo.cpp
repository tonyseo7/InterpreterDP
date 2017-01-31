#include "stdafx.h"
#include "Macro.h"


void main()
{
	Expression *ex1 = new ToneExpression();
	Expression *ex2 = new BrightExpression();
	Expression *ex3 = new SatuExpression();

	Macro *macro = new Macro();
	macro->AddExpression(ex1);
	macro->AddExpression(ex2);
	macro->AddExpression(ex3);
	macro->AddContext("B 20;");
	macro->AddContext("B 20; T-12;S 10;B10;");

	Picture *picture = new Picture("ÇöÃæ»çÀÇ º½", 100, 100, 100);

	macro->ChangePicture(picture);
	picture->View();

	delete picture;
	delete macro;
	delete ex1;
	delete ex2;
	delete ex3;
}