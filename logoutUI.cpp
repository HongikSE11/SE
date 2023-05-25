#include "logoutUI.h"

using namespace std;
void logoutUI::startinterface() {
	cout << "로그아웃 시작\n";


}

void logoutUI::ShowCompleteMessage() {
	cout << " 로그아웃 완료\n";
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "2.2. 로그아웃\n")
}

void logoutUI::inputinfo() {
	cout << "ID를 입력하시오 .\n";
	
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s , ID); 		
}
