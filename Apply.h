//헤더선언
#pragma once
#include <string>

class Apply
{
private:
	std::string name;		//회사이름
	int commpany_num;		//사업자번호
	std::string job;		//업무
	int n_member;			//인원수
	std::string due_date;		//마감일

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
