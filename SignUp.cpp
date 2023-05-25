#include "SignUp.h"

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;
void SignUp::ShowUserTypeInformation()
{
	cout << "일반회원입니다"; //파일 입출력
};

void SignUp::signupstart() {

	SignUPUI signupui;

	signupui.selectType();			//ui 에서 종류 선택
	ShowUserTypeInformation();		//선택된 회원 종류 출력
	signupui.putInfo();				//필드에 맞는 정보 입력


	string ID = signupui.ID;
	string name = signupui.name;
	string PW = signupui.PW;
	string num = signupui.num;
	string usertype = signupui.usertype;

	UserInfo newuser(usertype, name, num, ID, PW);

	newuser.editUserInfo(newuser, usertype);  //회원정보 리스트에 삽입
	signupui.ShowCompleteMessage();			//완료되었다는 메세지 출력
	







}