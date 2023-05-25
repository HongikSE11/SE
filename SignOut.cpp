#include "SignOut.h"
#include "SignOutUI.h"
#include <algorithm>
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "UserInfo.h"

using namespace std;


void SignOut::ShowUserInfo() {
    vector<UserInfo> userlist;
	vector<UserInfo> companylist;
	SignOutUI signoutui;
	signoutui.startinterface();
	signoutui.selectCase();
	string showid=signoutui.ID;
    UserInfo userinfo;
    userinfo.deleteUserInfo(showid);
	signoutui.ShowCompleteMessage();
	


}
