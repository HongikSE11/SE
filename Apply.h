#pragma once
#include <string>

class Apply
{
private:
	std::string name;//ȸ���̸�
	std::string job;//����
	int n_member;//�ο���
	std::string due_date;//������

public:
	Apply(std::string input_name, std::string input_job, int input_n_member, std::string input_due_date)
	{
		name = input_name;
		job = input_job;
		n_member = input_n_member;
		due_date = input_due_date;
	}

	void getApplyInfo();

};