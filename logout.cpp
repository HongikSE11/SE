#include "logout.h"
void logout::selectCase(string ID)
{
    logoutUI logoutui;
    UserInfo userinfo;
    vector<UserInfo> userlist;
    vector<UserInfo> companylist;
    for (int i = 0; i < userlist.size(); ++i)
    {
        if (userlist[i].ID == ID)
        {

            userinfo.putState(0);
            logoutui.ShowCompleteMessage();
        };

    };
}

void logout::logoutstart()
{
	logoutUI logoutui;
	logoutui.startinterface();
    logoutui.inputinfo();
    string ID = logoutui.ID;
    selectCase(ID);



}