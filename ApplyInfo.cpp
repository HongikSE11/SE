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
	std::string name;	//회사 이름
	int company_num;	//사업자 번호
	std::string job;	//업무
	std::string due_date;//신청 마감일

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
	아직 완성 X
	*/
	for (int i = 0; i < num_Apply; i++)
	{
		if(ApplyList)
	}

}