//헤더 선언
#include "Recurit.h"
#include <iostream>
#include "UserInfo.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void Recurit::getRecuritInfo()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "> { [%s] [%d] [%s] }\n", job.c_str(), n_member, due_date.c_str()); //채용 정보 파일 출력
}
