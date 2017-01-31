#include "stdafx.h"
#include "SatuExpression.h"

string SatuExpression::Interpret(string context)
{
	value = 0;
	int index = -1;
	string be = "";
	string af = "";

	while ((index = context.find_first_of("S")) != 1)
	{
		value += atoi(context.substr(index + strlen("S")).c_str());

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

void SatuExpression::DoItWithPicture(Picture *picture)
{
	picture->ChangeSaturation(value);

	Expression::DoItWithPicture(picture);
}