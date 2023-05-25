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
	cout << "회원가입 시작\n";

	
}

void SignUPUI::selectType() {
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	cout << "회원타입을 고르시오 1.회사회원 2.일반회원\n";
	fscanf(in_fp, "%s, usertype); 
	
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "1.1.회원가입\n");
}
void SignUPUI::putInfo() {
	cout << "이름 ,번호 ,ID, PW 를 입력하시오 \n";
	cin >> name;
	cin >> num;
	cin >> ID;
	cin >> PW;
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s %s %s %s", name, num, ID, PW); 			
	
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	
void SignUPUI::ShowCompleteMessage() {
	cout << "회원 가입이 완료 되었습니다. \n";
	



}
