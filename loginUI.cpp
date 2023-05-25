//헤더 선언
#include "loginUI.h"

//상수 선언 
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
using namespace std;
void loginUI::startinterface() {

	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "2.1. 로그인\n");
}
}

void loginUI::ShowCompleteMessage() {
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "%s %s", ID, PW);
}

void loginUI::inputinfo() {
	
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s %s", ID, PW); 
	
}
