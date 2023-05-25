//헤더 선언
#include "SignOutUI.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void SignOutUI::startinterface() 
{
	cout << "회원탈퇴 시작\n";
}

void SignOutUI::selectCase() 
{
	
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s,  ID); 
}



void SignOutUI::ShowCompleteMessage()
{
	fprintf(out_fp, "1.2.회원탈퇴\n");
}
