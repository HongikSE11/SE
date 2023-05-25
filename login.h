//헤더선언
#pragma once
#include "UserInfo.h"
#include "loginUI.h"

class login
{
public:
	static vector<UserInfo> userlist;
	static vector<UserInfo> companylist;
	void cheakloginInfo(string ID, string PW);
	void loginstart();
};

