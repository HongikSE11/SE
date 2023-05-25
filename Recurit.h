#pragma once
#include <string>

class Recurit
{
private:
	std::string job; //업무
	int n_member;	//인원 수
	std::string due_date;	//신청 마감일
	//std::string registrant = "default"; //정보 등록자

public:
	Recurit(std::string input_job, int input_n_member, std::string input_due_date)
	{
		job = input_job;
		n_member = input_n_member;
		due_date = input_due_date;
	}

	void getRecuritInfo();
};

