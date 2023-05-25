#include "SignUp.h"

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;
void SignUp::ShowUserTypeInformation()
{
	cout << "일반회원입니다";
};

void SignUp::signupstart() {

	SignUPUI signupui;
	signupui.selectType();
	ShowUserTypeInformation();
	signupui.putInfo();
	string ID = signupui.ID;
	string name = signupui.name;
	string PW = signupui.PW;
	string num = signupui.num;
	string usertype = signupui.usertype;
	UserInfo newuser(usertype, name, num, ID, PW);

	newuser.editUserInfo(newuser, usertype);
	signupui.ShowCompleteMessage();
	







}