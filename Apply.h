#pragma once
#include <string>

class Apply
{
private:
	std::string name;		//ȸ���̸�
	int commpany_num;		//����ڹ�ȣ
	std::string job;		//����
	int n_member;			//�ο���
	std::string due_date;	//������

public:
	Apply(std::string input_name, int input_company_num, std::string input_job, int input_n_member,std::string input_due_date)
	{
		name = input_name;
		commpany_num = input_company_num;
		job = input_job;
		n_member = input_n_member;
		due_date = input_due_date;
	}

	void getApplyInfo();

};