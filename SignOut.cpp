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

    vector<UserInfo> userlist;		//�Ϲ� ȸ�� ����Ʈ 
	vector<UserInfo> companylist;	//ȸ�� ȸ�� ����Ʈ
	SignOutUI signoutui;			//boundary Ŭ���� �ν��Ͻ�

	signoutui.startinterface();		//�������̽� ����
	signoutui.selectCase();			//ȸ�� ID �Է� �Լ�

	string showid=signoutui.ID;		//Ż���Ϸ��� ȸ�� ID
    UserInfo userinfo;

    userinfo.deleteUserInfo(showid);	//ȸ�� Ż��
	signoutui.ShowCompleteMessage();	//�Ϸ� �޼��� ���
	


}
