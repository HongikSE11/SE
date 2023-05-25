//헤더 선언
#pragma once
#include <string>
#include "UserInfo.h"

class Recurit
{
private:
	std::string job;		//업무
	int n_member;			//인원 수
	std::string due_date;		//신청 마감일
	std::string company_name; 	//회사 이름
	int num; 			//사업자 번호

public:
	Recurit(std::string input_job, int input_n_member, std::string input_due_date, std::string input_company_name, int input_num)
	{
		
		job = input_job;
		n_member = input_n_member;
		due_date = input_due_date;
		company_name = input_company_name;
		num = input_num;
	}

	void getRecuritInfo(); //채용 정보들 출력 함수
};

