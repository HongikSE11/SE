#include "UserInfo.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>


UserInfo::UserInfo(string& type, string& name, string& num, string& id, string& pw) {
    this->name = name;
    this->num = num;
    this->ID = id;
    this->PW = pw;
    this->usertype = type;


};

void UserInfo::getinfo() {
    cout << "회원정보 받아오기\n";
    vector<UserInfo> userlist;
    vector<UserInfo> companylist;
   
}
void UserInfo::editUserInfo(UserInfo user,string usertype) {
    vector<UserInfo> userlist;
    vector<UserInfo> companylist;
    if (usertype == "1")
        userlist.push_back(user);
    else if (usertype == "2")
        companylist.push_back(user);
        cout << userlist.size();
}
void UserInfo::deleteUserInfo(string showid)
{
    vector<UserInfo> userlist;
    vector<UserInfo> companylist;
    for (int i = 0; i < userlist.size(); ++i)
    {
        if (userlist[i].ID == showid)
        {
            userlist.erase(userlist.begin() + i);
            --i;  // 현재 인덱스를 감소시켜 다음 원소를 검사하도록 조정
        }
    }
    for (int i = 0; i < companylist.size(); ++i)
    {
        if (companylist[i].ID == showid)
        {
            companylist.erase(userlist.begin() + i);
            --i;  // 현재 인덱스를 감소시켜 다음 원소를 검사하도록 조정
        }
    }


}
void UserInfo::putState(int state)
{
    int loginstate;
    loginstate = state;
}