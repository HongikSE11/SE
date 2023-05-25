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
		string usertype;	//ȸ�� ���� (�Ϲ� ȸ��, ȸ�� ȸ��)
		string name;		//ȸ���̸�,ȸ���̸�
		string num;			//����ڹ�ȣ,�ֹι�ȣ

		string ID;			//ID
		string PW;			//passward
			
		static vector<UserInfo> userlist;		//�Ϲ� ȸ�� ����Ʈ
		static vector<UserInfo> companylist;	//ȸ�� ȸ�� ����Ʈ
		static int loginstate;					//�α��� ���� 


		UserInfo() { cout << "\n"; }; //������
	    UserInfo(string& usertype, string& name, string& num, string& ID, string& PW);	//������
	    
	    
	    
	    void getinfo();										//ȸ�� ���� ��ȸ
	    void editUserInfo(UserInfo user, string usertype);	//ȸ�� ����Ʈ�� ���ο� ȸ�� �߰�
		void deleteUserInfo(string showid);					//ȸ�� ����Ʈ���� ȸ�� ����
		void putState(int state);							//�α��� ����

		


};