#pragma once
#include <string>

class Recurit
{
private:
	std::string job; //����
	int n_member;	//�ο� ��
	std::string due_date;	//��û ������
	//std::string registrant = "default"; //���� �����

public:
	Recurit(std::string input_job, int input_n_member, std::string input_due_date)
	{
		job = input_job;
		n_member = input_n_member;
		due_date = input_due_date;
	}

	void getRecuritInfo();
};

