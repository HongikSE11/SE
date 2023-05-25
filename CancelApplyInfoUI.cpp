#include "CancelApplyInfoUI.h"
#include "CancelApplyInfoUI.h"
#include "ApplyInfo.cpp"
#include <iostream>
#include <string.h>
#include <stdio.h>

#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void CancelApplyInfoUI::startInterface()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "지원 정보 조회\n");
}

//void CancelApplyInfoUI::selectInfo(){}
