//헤더선언
#pragma once
#include "UserInfo.h"
#include "logoutUI.h"
class logout
{
public:
	static vector<UserInfo> userlist;
	static vector<UserInfo> companylist;
	void selectCase(string ID);
	void logoutstart();

};
