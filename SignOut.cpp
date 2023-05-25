#include "SignOut.h"
#include "SignOutUI.h"
#include <algorithm>
#include <string>
#include <stdio.h>
#include <iostream>
#include <vector>
#include "UserInfo.h"

using namespace std;


void SignOut::ShowUserInfo() {

    vector<UserInfo> userlist;		//일반 회원 리스트 
	vector<UserInfo> companylist;	//회사 회원 리스트
	SignOutUI signoutui;			//boundary 클래스 인스턴스

	signoutui.startinterface();		//인터페이스 시작
	signoutui.selectCase();			//회원 ID 입력 함수

	string showid=signoutui.ID;		//탈퇴하려는 회원 ID
    UserInfo userinfo;

    userinfo.deleteUserInfo(showid);	//회원 탈퇴
	signoutui.ShowCompleteMessage();	//완료 메세지 출력
	


}
