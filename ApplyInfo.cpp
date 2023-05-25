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

void ApplyInfo::addApplyInfo(std::string input_name, int input_company_num, std::string input_job)
{
	std::string name; 
	int company_num;	
	std::string job;	

	name = input_name;
	company_num = input_company_num;
	job = input_job;

	Apply* newApply = new Apply (name, company_num, job);

	ApplyList[num_Apply++] = newApply;
}

void ApplyInfo::cancelApply(int input_company_num)
{
	int company_num;
	company_num = input_company_num;
	/*
	아직 완성 X
	*/

}