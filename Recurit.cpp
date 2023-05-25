#include "Recurit.h"
#include <iostream>
#include "UserInfo.h"
//#include <tuple>
//typedef std::tuple<std::string, int, std::string> job_information;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

void Recurit::getRecuritInfo()
{
	//std::cout << job << " " << n_member << " " << due_date << std::endl;
	

	//job_information temp_info = std::make_tuple(job, n_member, due_date);

	/*
	char str[2][100];	//job, due_date 입력 용
	str[0] = job;
	str[1] = due_date;
	*/



	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "> { [%s] [%d] [%s] }\n", job.c_str(), n_member, due_date.c_str()); //채용 정보 파일 출력
}
