#include "ApplyInfo.h"
#include <iostream>
#include <string>


void ApplyInfo::getApplyInfo()
{
	for (int i = 0; i < num_Apply; i++)
	{
		ApplyList[i]->getApplyInfo();
	}
}

void ApplyInfo::addApplyInfo(std::string input_name, int input_company_num, std::string input_job, std::string input_due_date)
{
	std::string name;	//ȸ�� �̸�
	int company_num;	//����� ��ȣ
	std::string job;	//����
	std::string due_date;//��û ������

	name = input_name;
	company_num = input_company_num;
	job = input_job;
	due_date = input_due_date;

	Apply* newApply = new Apply(name, job, company_num, due_date);

	ApplyList[num_Apply++] = newApply;
}

void ApplyInfo::cancelApply(int input_company_num)
{
	int company_num;
	company_num = input_company_num;
	/*
	���� �ϼ� X
	*/
	for (int i = 0; i < num_Apply; i++)
	{
		if(ApplyList)
	}

}