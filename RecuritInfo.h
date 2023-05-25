//헤더 선언
#pragma once
#include "Recurit.h"
#include <string.h>

class RecuritInfo
{
private:
	static Recurit* RecuritList[50];	//채용 정보 저장 리스트
	static int num_Recurit;			//채용 정보 수

public:
	RecuritInfo()
	{
		num_Recurit = 0;	//생성자에서 채용 정보 수 를 0 으로 초기화
	}
	
	static void getInfo();	//채용 정보 출력 함수
	static void addInfo(std::string input_job, int input_n_member, std::string input_due_date); //채용 정보 입력 함수
	static void getRecuritInfoDetails();	//업무별 지원자 수 출력
};

