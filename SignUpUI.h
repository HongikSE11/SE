#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class SignUPUI
{
public:
	string name, num, ID, PW, usertype;


	void startinterface();	//interface 시작 함수
	void selectType();		//회사/일반 회원 선택
	void putInfo();			//정보 입력 함수
	void ShowCompleteMessage();	//완료메세지 출력 함수
	

};
