//헤더 선언
#include "ApplyInfo.h"
#include <iostream>
#include <string>


void ApplyInfo::getApplyInfo()
{
	for (int i = 0; i < num_Apply; i++)
	{
		ApplyList[i]->getApplyInfo();	//지원 정보 출력 함수 호출
	}
}

void ApplyInfo::addApplyInfo(std::string input_name, int input_company_num, std::string input_job, std::string input_due_date)
{
	std::string name;	//회사 이름
	int company_num;	//사업자 번호
	std::string job;	//업무
	std::string due_date;	//신청 마감일

	name = input_name;
	company_num = input_company_num;
	job = input_job;
	due_date = input_due_date;

	Apply* newApply = new Apply(name, job, company_num, due_date);	//지원 정보 객체 생성

	ApplyList[num_Apply++] = newApply;	//지원 정보 리스트에 지원 정보 객체 추가
}

void ApplyInfo::cancelApply(int input_company_num)
{
	int company_num;	//사업자 번호 
	company_num = input_company_num;
	for (int i = 0; i < num_Apply; i++)
	{
		if(ApplyList[i][1] == company_num)
		{
			delete ApplyList[i];	//지원 정보 삭제
		}
	}

}
