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

void SignOutUI::startinterface() {
	cout << "회원탈퇴 시작\n";


}

void SignOutUI::selectCase() {
	cout << "회원아이디를 입력하시오 \n";
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s,  ID); 


}



void SignOutUI::ShowCompleteMessage() {
	cout << "회원 탈퇴가 완료 되었습니다. \n";




}
