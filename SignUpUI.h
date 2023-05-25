#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class SignUPUI
{
public:
	void startinterface();
	void selectType();
	void putInfo();
	void ShowCompleteMessage();
	string name, num, ID, PW, usertype;

};
