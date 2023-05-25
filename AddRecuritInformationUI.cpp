#include "AddRecuritInformationUI.h"
#include "AddRecuritInformation.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void AddRecuritInformationUI::inputInfo()
{
	//AddRecuritInformation::addNewInfo();

	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	char str[2][100];	//job, due_date 입력 용
	std::string job; //업무
	int n_member = 0;	//인원 수
	std::string due_date; //마김 기한


	fscanf(in_fp, "%s %d %s", str[0], &n_member, str[1]);

	job = str[0];
	due_date = str[1];
	AddRecuritInformation::addNewInfo(job, n_member, due_date);

}

void AddRecuritInformationUI::startInterface()
{
	//std::cout << "> [업무] [인원 수] [신청 마감일]" << std::endl;

}

void AddRecuritInformationUI::showCompleteMessage()
{
	//std::cout << "채용 정보가 등록되었습니다." << std::endl;

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "채용 정보가 등록되었습니다.");
}
