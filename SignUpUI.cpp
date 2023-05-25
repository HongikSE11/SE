//헤더선언
#include "SignUpUI.h"
#include <string>
#include <stdio.h>
#include <iostream>
// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"


#include <fstream>
using namespace std;
void SignUPUI::startinterface() {
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "1.1.회원가입\n");

	
}

void SignUPUI::selectType() {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	
	fscanf(in_fp, "%s, usertype); 
	

}
void SignUPUI::putInfo() {

	
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s %s %s %s", name, num, ID, PW); 			
	

void SignUPUI::ShowCompleteMessage() {
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "%s %s %s %s , name,num,ID,PW);
	
	



}
