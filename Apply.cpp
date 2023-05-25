#include "Apply.h"
#include <iostream>
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void Apply::getApplyInfo()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "> %s %s %d %s \n", name.c_str(), job.c_str(), n_member, due_date.c_str());
}