#include "stdafx.h"
#include "Picture.h"

Picture::Picture(string name, int tone, int brightness, int saturation)
{
	this->name = name;
	this->tone = tone;
	this->brightness = brightness;
	this->saturation = saturation;
}

void Picture::ChangeTone(int tone)
{
	this->tone += tone;
}

void Picture::ChangeBrightness(int brightness)
{
	this->brightness += brightness;
}

void Picture::ChangeSaturation(int saturation)
{
	this->saturation += saturation;
}

void Picture::View()const
{
	cout << "���� ���ϸ�:" << name << endl;
	cout << "����:" << tone << "��:" << brightness << "ä��:" << saturation << endl;
}