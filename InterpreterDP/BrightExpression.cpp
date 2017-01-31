#include "stdafx.h"
#include "BrightExpression.h"

string BrightExpression::Interpret(string context)
{
	value = 0;
	int index = -1;
	string be = "";
	string af = "";

	while ((index = context.find_first_of("B"))!=-1)
	{
		value += atoi(context.substr(index + strlen("B")).c_str());

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

void BrightExpression::DoItWithPicture(Picture *picture)
{
	picture->ChangeBrightness(value);

	Expression::DoItWithPicture(picture);
}