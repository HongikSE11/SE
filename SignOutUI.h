//상수선언
#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class SignOutUI
{
public:
	void selectCase();	//ID 입력
	void startinterface();	//interface 시작 함수
	void ShowCompleteMessage(); //완료 메세지 출력 함수


	string ID; //입력하는 회원 ID

};
