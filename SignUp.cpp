#include "SignUp.h"

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;
void SignUp::ShowUserTypeInformation()
{
	cout << "�Ϲ�ȸ���Դϴ�"; //���� �����
};

void SignUp::signupstart() {

	SignUPUI signupui;

	signupui.selectType();			//ui ���� ���� ����
	ShowUserTypeInformation();		//���õ� ȸ�� ���� ���
	signupui.putInfo();				//�ʵ忡 �´� ���� �Է�


	string ID = signupui.ID;
	string name = signupui.name;
	string PW = signupui.PW;
	string num = signupui.num;
	string usertype = signupui.usertype;

	UserInfo newuser(usertype, name, num, ID, PW);

	newuser.editUserInfo(newuser, usertype);  //ȸ������ ����Ʈ�� ����
	signupui.ShowCompleteMessage();			//�Ϸ�Ǿ��ٴ� �޼��� ���
	







}