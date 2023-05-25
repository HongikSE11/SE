//헤더 선언
#include "CheckRecuritInfomationUI.h"
#include "CheckRecuritInfomation.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void CheckRecuritInfomationUI::startInterface()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "3.2. 등록된 채용 정보 조회\n");	//파일 출력
}

void CheckRecuritInfomationUI::selectInfo()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "4.1 채용 정보 검색\n");	//파일 출력

	CheckRecuritInfomation::showRecuritInfo();	//채용 정보 출력 함수 호출
}
