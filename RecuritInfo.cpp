#include "RecuritInfo.h"
#include "Recurit.h"
#include <iostream>
#include <string>
#include <vector>
#include <>
//#include <tuple>

//typedef std::tuple<std::string, int, std::string> job_information;

void RecuritInfo::getInfo()
{	
	//ä�� ���� �� ����� ����Ʈ�� ��ȸ�ϸ鼭 ä�� ���� ���
	for (int i = 0; i < num_Recurit; i++)
	{
		RecuritList[i]->getRecuritInfo();
	}
}

void RecuritInfo::addInfo(std::string input_job, int input_n_member, std::string input_due_date)
{
	std::string job;			//����
	int n_member;				//�ο� ��
	std::string due_date;		//��û ������
	std::string company_name;	//ȸ�� �̸�
	int num;					//����� ��ȣ

	//std::cin >> job >> n_member >> due_date;

	job = input_job;
	n_member = input_n_member;
	due_date = input_due_date;

	company_name = 

	Recurit *newRecurit = new Recurit(job, n_member, due_date); //���ο� ä�� ���� ��ü ����

	RecuritList[num_Recurit++] = newRecurit; //ä�� ���� ��ϵ� ����Ʈ�� ���ο� ä�� ���� ��ü �߰�
}
