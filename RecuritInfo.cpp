//헤더 선언
#include "RecuritInfo.h"
#include "Recurit.h"
#include <iostream>
#include <string>
#include <vector>

void RecuritInfo::getInfo()
{	
	//채용 정보 가 저장된 리스트를 순회하면서 채용 정보 출력
	for (int i = 0; i < num_Recurit; i++)
	{
		RecuritList[i]->getRecuritInfo();
	}
}

void RecuritInfo::addInfo(std::string input_job, int input_n_member, std::string input_due_date)
{
	std::string job;		//업무
	int n_member;			//인원 수
	std::string due_date;		//신청 마감일
	
	job = input_job;
	n_member = input_n_member;
	due_date = input_due_date;

	Recurit *newRecurit = new Recurit(job, n_member, due_date); //새로운 채용 정보 객체 생성

	RecuritList[num_Recurit++] = newRecurit; //채용 정보 등록된 리스트에 새로운 채용 정보 객체 추가
}

void RecuritInfo::getRecuritInfoDetails()
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "5.1. 지원 정보 통계");	//파일 출력
}

