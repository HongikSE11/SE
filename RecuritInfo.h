#pragma once
#include "Recurit.h"
#include <string.h>
//#include <tuple>
//typedef std::tuple<std::string, int, std::string> job_information;

class RecuritInfo
{
private:
	static Recurit* RecuritList[50];		//채용 정보 저장 배열
	static int num_Recurit;	//채용 정보 수

public:
	RecuritInfo()
	{
		num_Recurit = 0;
	}

	static void getInfo();
	static void addInfo(std::string input_job, int input_n_member, std::string input_due_date);
};

