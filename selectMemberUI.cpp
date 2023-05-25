//헤더 선언
#include "selectMemberUI.h"
#include "selectMember.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

//상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



void selectMemberUI::startInterface()
{
  	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "지원 정보 통계");	//파일 출력
}

void selectMemberUI::showUserInfo()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "%s %d", job, num);	//지원 정보 통계 파일 출력
}
