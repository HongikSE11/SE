//헤더선언
#include "logoutUI.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
using namespace std;
void logoutUI::startinterface() {
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "2.2. 로그아웃\n")

}

void logoutUI::ShowCompleteMessage() {
	
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "%s , ID);
}
void logoutUI::inputinfo() {
	
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s , ID); 		
}
