#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class SignUPUI
{
public:
	string name, num, ID, PW, usertype;


	void startinterface();	//interface ���� �Լ�
	void selectType();		//ȸ��/�Ϲ� ȸ�� ����
	void putInfo();			//���� �Է� �Լ�
	void ShowCompleteMessage();	//�Ϸ�޼��� ��� �Լ�
	

};
