#pragma once
#include <string>
#include <stdio.h>
#include <vector>
#include "SignUpUI.h"
#include "SIgnUp.h"

using namespace std;


class UserInfo
{

	   
	
	
	public:
		string usertype;	//회원 종류 (일반 회원, 회사 회원)
		string name;		//회사이름,회원이름
		string num;			//사업자번호,주민번호

		string ID;			//ID
		string PW;			//passward
			
		static vector<UserInfo> userlist;		//일반 회원 리스트
		static vector<UserInfo> companylist;	//회사 회원 리스트
		static int loginstate;					//로그인 상태 


		UserInfo() { cout << "\n"; }; //생성자
	    UserInfo(string& usertype, string& name, string& num, string& ID, string& PW);	//생성자
	    
	    
	    
	    void getinfo();										//회원 정보 조회
	    void editUserInfo(UserInfo user, string usertype);	//회원 리스트에 새로운 회원 추가
		void deleteUserInfo(string showid);					//회원 리스트에서 회원 삭제
		void putState(int state);							//로그인 여부

		


};