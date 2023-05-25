// 헤더선언
#pragma once
#include "UserInfo.h"
class SignOut
{
public:
	void ShowUserInfo(); //회원 탈퇴하는 회원 정보 출력 함수
	
	static vector<UserInfo> userlist;	//일반 회원 리스트
	static vector<UserInfo> companylist; //회사 회원 리스트

};

