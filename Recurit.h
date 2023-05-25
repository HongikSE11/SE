#pragma once
#include <string>
#include "UserInfo.h"

class Recurit
{
private:
	std::string job;		//����
	int n_member;			//�ο� ��
	std::string due_date;	//��û ������
	std::string company_name; //ȸ�� �̸�
	int num; //����� ��ȣ

	//std::string registrant = "default"; //���� �����

public:
	Recurit(std::string input_job, int input_n_member, std::string input_due_date, std::string input_company_name, int input_num)
	{
		job = input_job;
		n_member = input_n_member;
		due_date = input_due_date;
		company_name = input_company_name;
		num = input_num;
	}

	void getRecuritInfo(); //ä�� ������ ��� �Լ�
};

