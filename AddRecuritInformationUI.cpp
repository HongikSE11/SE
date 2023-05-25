//헤더 선언
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
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	char str[2][100];		//job, due_date 입력 용 문자열
	std::string job;		//업무 이름
	int n_member = 0;		//인원 수
	std::string due_date;		//마김 기한


	fscanf(in_fp, "%s %d %s", str[0], &n_member, str[1]); 		//파일에서 업무, 인원 수, 마감 기한 불러오기

	job = str[0];
	due_date = str[1];
	AddRecuritInformation::addNewInfo(job, n_member, due_date);	//새로운 채용 정보 등록 함수

}

void AddRecuritInformationUI::startInterface()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "채용 정보가 등록\n"); //파일 출력
}

void AddRecuritInformationUI::showCompleteMessage()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "채용 정보가 등록되었습니다."); //파일 출력
}
