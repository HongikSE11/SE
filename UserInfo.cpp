#include "UserInfo.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>


UserInfo::UserInfo(string& type, string& name, string& num, string& id, string& pw) {
    this->name = name;  //회원 이름
    this->num = num;    //주민번호 or 사업자 번호
    this->ID = id;      //회원 ID
    this->PW = pw;      //회원 passward
    this->usertype = type;  //회원 종류


};

void UserInfo::getinfo() {
    cout << "회원정보 받아오기\n";  //파일 입출력

    vector<UserInfo> userlist;
    vector<UserInfo> companylist;
   
}

void UserInfo::editUserInfo(UserInfo user,string usertype) {
    vector<UserInfo> userlist;
    vector<UserInfo> companylist;

    if (usertype == "1")
        userlist.push_back(user); //새로운 일반 회원 정보 추가
    else if (usertype == "2")
        companylist.push_back(user);    //새로운 회사 회원 정보 추가
        //cout << userlist.size();
}
void UserInfo::deleteUserInfo(string showid)
{
    vector<UserInfo> userlist;  
    vector<UserInfo> companylist;

    for (int i = 0; i < userlist.size(); ++i)
    {
        if (userlist[i].ID == showid)
        {
            //탈퇴하려는 ID 인덱스 찾기
            userlist.erase(userlist.begin() + i);
            --i;  
        }
    }
    for (int i = 0; i < companylist.size(); ++i)
    {
        if (companylist[i].ID == showid)
        {
            companylist.erase(userlist.begin() + i);
            --i;
        }
    }


}
void UserInfo::putState(int state)
{
    int loginstate;
    loginstate = state; //1-->로그인 0--> 로그아웃
}