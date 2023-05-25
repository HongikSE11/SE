#include "AddRecuritInformationUI.h"
#include "AddRecuritInformation.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

// ��� ����
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void AddRecuritInformationUI::inputInfo()
{
	//AddRecuritInformation::addNewInfo();

	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	char str[2][100];	//job, due_date �Է� ��
	std::string job; //����
	int n_member = 0;	//�ο� ��
	std::string due_date; //���� ����


	fscanf(in_fp, "%s %d %s", str[0], &n_member, str[1]);

	job = str[0];
	due_date = str[1];
	AddRecuritInformation::addNewInfo(job, n_member, due_date);

}

void AddRecuritInformationUI::startInterface()
{
	//std::cout << "> [����] [�ο� ��] [��û ������]" << std::endl;

}

void AddRecuritInformationUI::showCompleteMessage()
{
	//std::cout << "ä�� ������ ��ϵǾ����ϴ�." << std::endl;

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "ä�� ������ ��ϵǾ����ϴ�.");
}
