#pragma once
#include "Apply.h"
#include <string.h>

class ApplyInfo
{
private:
	static Apply* ApplyList[50];		//���� ���� ���� �迭
	static int num_Apply;				//���� ���� �迭 ��

public:
	ApplyInfo()
	{
		num_Apply = 0;
	}

	static void getApplyInfo();
	static void addApplyInfo(std::string input_name, int input_company_num, std::string input_job);
	static void cancelApply(int input_company_num);
};
