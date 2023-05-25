#include "SignOut.h"
#include "SignOutUI.h"

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;


void SignOut::signOutstart() {

	SignOutUI signoutui;
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
void SignOut::ShowUserInfo() {









}