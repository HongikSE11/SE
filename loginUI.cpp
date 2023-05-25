#include "loginUI.h"

//상수 선언 
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"
using namespace std;
void loginUI::startinterface() {
	cout << "로그인 시작\n";

	
	
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "2.1. 로그인\n");
}
}

void loginUI::ShowCompleteMessage() {
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "\n");
	cout << "회원 가입이 완료 되었습니다. \n";

}

void loginUI::inputinfo() {
	cout << "ID PW를 입력하시오.\n";
	cin >> ID;
	cin >> PW;
	FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
	fscanf(in_fp, "%s %s", ID, PW); 
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "%s %s", ID, PW);
}
