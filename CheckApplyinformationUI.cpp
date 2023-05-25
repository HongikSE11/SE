#include <iostream>
#include <string.h>
#include <stdio.h>
#include "CheckApplyInfomationUI.h"
#include "CheckApplyInfomation.h"

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void CheckApplyInformationUI::startInterface() 
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "지원 정보 조회\n");
}


void CheckApplyInformationUI::selectInfo()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "4.3. 지원 정보 조회\n");

	CheckApplyInformation::showApplyInfo();
}