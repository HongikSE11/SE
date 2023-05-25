#include "RecuritInfo.h"
#include "Recurit.h"
#include <iostream>
#include <string>
//#include <tuple>

//typedef std::tuple<std::string, int, std::string> job_information;

void RecuritInfo::getInfo()
{
	for (int i = 0; i < num_Recurit; i++)
	{
		RecuritList[i]->getRecuritInfo();
	}
}

void RecuritInfo::addInfo(std::string input_job, int input_n_member, std::string input_due_date)
{
	std::string job; //����
	int n_member;	//�ο� ��
	std::string due_date;	//��û ������

	//std::cin >> job >> n_member >> due_date;

	job = input_job;
	n_member = input_n_member;
	due_date = input_due_date;

	Recurit *newRecurit = new Recurit(job, n_member, due_date);

	RecuritList[num_Recurit++] = newRecurit;
}
