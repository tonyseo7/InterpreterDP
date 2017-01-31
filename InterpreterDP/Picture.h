#pragma once
#include "common.h"

class Picture
{
	string name;
	int tone;
	int brightness;
	int saturation;

public:
	Picture(string name, int tone, int brightness, int saturation);
	void ChangeTone(int tone);
	void ChangeBrightness(int brightness);
	void ChangeSaturation(int saturation);
	void View()const;
};