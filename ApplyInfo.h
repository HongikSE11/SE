#pragma once
#include "Apply.h"
#include <string.h>

class ApplyInfo
{
private:
	static Apply* ApplyList[50];		//지원 정보 저장 배열
	static int num_Apply;				//지원 정보 배열 수

public:
	ApplyInfo()
	{
		num_Apply = 0;
	}

	static void getApplyInfo();
	static void addApplyInfo(std::string input_name, int input_company_num, std::string input_job);
	static void cancelApply(int input_company_num);
};
