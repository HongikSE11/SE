#pragma once
#include <string>
#include <stdio.h>
#include <vector>
#include "SignUpUI.h"
#include "SIgnUp.h"

using namespace std;


class UserInfo
{

	   
	
	
	public:
		string usertype;
		string name;//ȸ���̸�,ȸ���̸�
		string num; //����ڹ�ȣ,�ֹι�ȣ

		string ID;
		string PW;
		UserInfo() { cout << "\n"; };
	    UserInfo(string& usertype, string& name, string& num, string& ID, string& PW);
	    
	    
	    
	    void getinfo();
	    void editUserInfo(UserInfo user, string usertype);
		void deleteUserInfo(string showid);
		void putState(int state);

		static vector<UserInfo> userlist;
		static vector<UserInfo> companylist;
		static int loginstate; 


};