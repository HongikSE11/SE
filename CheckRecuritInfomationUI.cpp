#include "CheckRecuritInfomationUI.h"
#include "CheckRecuritInfomation.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
//#include <tuple>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

//typedef std::tuple<std::string, int, std::string> job_information;

void CheckRecuritInfomationUI::startInterface()
{
	//std::cout << "등록된 채용 정보 조회" << std::endl;
	//std::cout << "> { [업무] [인원 수] [신청 마감일] } " << std::endl;

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "등록된 채용 정보 조회\n");


	//fprintf(out_fp, "> { [업무] [인원 수] [신청 마감일] }\n");

}

void CheckRecuritInfomationUI::selectInfo()
{
	

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "4.1 채용 정보 검색\n");

	CheckRecuritInfomation::showRecuritInfo();
	
	/*
	std::string job; //업무
	int n_member;	//인원 수
	std::string due_date;	//신청 마감일

	job_information temp_info = std::make_tuple(job, n_member, due_date);

	temp_info = CheckRecuritInfomation::showRecuritInfo();

	job = std::get<0>(temp_info);
	n_member = std::get<1>(temp_info);
	due_date = std::get<2>(temp_info);

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "> { [%s] [%d] [%s] }\n", job, n_member, due_date);
	*/

}
