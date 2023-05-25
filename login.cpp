//헤더선언
#include "login.h"
#include "loginUI.h"
void login::cheakloginInfo(string ID ,string PW) {
    UserInfo userinfo;
    loginUI loginui;
	vector<UserInfo> userlist;
	vector<UserInfo> companylist;
    for (int i = 0; i < userlist.size(); ++i)
    {
        if (userlist[i].ID == ID && userlist[i].PW == PW)
        {
            loginui.ShowCompleteMessage();
            userinfo.putState(1);
        }
        else
        {
            
            
            userinfo.putState(0);
        }


    }
    for (int i = 0; i < userlist.size(); ++i)
    {
        if (companylist[i].ID == ID && companylist[i].PW == PW)
        {
            loginui.ShowCompleteMessage();
            userinfo.putState(1);
        }
        else
        {
            

            userinfo.putState(0);
        }


    }
	

}
void login::loginstart() {
	loginUI loginui;
	loginui.startinterface();
	loginui.inputinfo();
	string loginID = loginui.ID;
	string loginPW = loginui.PW;
	cheakloginInfo(loginID,loginPW);
	
}
