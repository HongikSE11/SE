//헤더 선언
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
	fprintf(out_fp, "4.4 지원 취소");
}


