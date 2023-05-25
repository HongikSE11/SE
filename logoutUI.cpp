#include "logoutUI.h"

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
