#include "UserInfo.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>


UserInfo::UserInfo(string& type, string& name, string& num, string& id, string& pw) {
    this->name = name;  //ȸ�� �̸�
    this->num = num;    //�ֹι�ȣ or ����� ��ȣ
    this->ID = id;      //ȸ�� ID
    this->PW = pw;      //ȸ�� passward
    this->usertype = type;  //ȸ�� ����


};

void UserInfo::getinfo() {
    cout << "ȸ������ �޾ƿ���\n";  //���� �����

    vector<UserInfo> userlist;
    vector<UserInfo> companylist;
   
}

void UserInfo::editUserInfo(UserInfo user,string usertype) {
    vector<UserInfo> userlist;
    vector<UserInfo> companylist;

    if (usertype == "1")
        userlist.push_back(user); //���ο� �Ϲ� ȸ�� ���� �߰�
    else if (usertype == "2")
        companylist.push_back(user);    //���ο� ȸ�� ȸ�� ���� �߰�
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
            //Ż���Ϸ��� ID �ε��� ã��
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
    loginstate = state; //1-->�α��� 0--> �α׾ƿ�
}