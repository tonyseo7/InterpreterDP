#include "stdafx.h"
#include "ToneExpression.h"

string 	ToneExpression::Interpret(string context)
{
	value = 0;
	int index = -1;
	string be = "";
	string af = "";
	string cmp = "";

	while ((index = context.find_first_of(cmp)) != -1)
	{
		value += atoi(context.substr(index + strlen("T")).c_str());

		if (index > 0)
		{
			be = context.substr(0, index);
		}
		else
		{
			be = "";
		}

		index = context.find(";", index);
		af = context.substr(index + 1);
		context = be + af;
	}

	return NextInterpret(context);

}

void ToneExpression::DoItWithPicture(Picture *picture)
{
	picture->ChangeTone(value);
	Expression::DoItWithPicture(picture);

}