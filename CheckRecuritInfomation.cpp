#include "CheckRecuritInfomation.h"
#include "RecuritInfo.cpp"
//#include <tuple>

//typedef std::tuple<std::string, int, std::string> job_information;


void CheckRecuritInfomation::showRecuritInfo()
{
	RecuritInfo::getInfo(); //채용 정보 출력 함수 호출
}
