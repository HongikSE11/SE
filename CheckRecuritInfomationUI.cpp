#include "CheckRecuritInfomationUI.h"
#include "CheckRecuritInfomation.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
//#include <tuple>

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//typedef std::tuple<std::string, int, std::string> job_information;

void CheckRecuritInfomationUI::startInterface()
{
	//std::cout << "��ϵ� ä�� ���� ��ȸ" << std::endl;
	//std::cout << "> { [����] [�ο� ��] [��û ������] } " << std::endl;

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "��ϵ� ä�� ���� ��ȸ\n");


	//fprintf(out_fp, "> { [����] [�ο� ��] [��û ������] }\n");

}

void CheckRecuritInfomationUI::selectInfo()
{
	

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "4.1 ä�� ���� �˻�\n");

	CheckRecuritInfomation::showRecuritInfo();
	
	/*
	std::string job; //����
	int n_member;	//�ο� ��
	std::string due_date;	//��û ������

	job_information temp_info = std::make_tuple(job, n_member, due_date);

	temp_info = CheckRecuritInfomation::showRecuritInfo();

	job = std::get<0>(temp_info);
	n_member = std::get<1>(temp_info);
	due_date = std::get<2>(temp_info);

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "> { [%s] [%d] [%s] }\n", job, n_member, due_date);
	*/

}
