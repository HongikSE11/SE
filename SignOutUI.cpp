//헤더 선언
#include "SignOutUI.h"
#include <string>
#include <stdio.h>
#include <iostream>


#include <fstream>
using namespace std;
void SignOutUI::startinterface() {
	cout << "회원탈퇴 시작\n";


}

void SignOutUI::selectCase() {
	cout << "회원아이디를 입력하시오 \n";

	cin >> ID;


}



void SignOutUI::ShowCompleteMessage() {
	cout << "회원 탈퇴가 완료 되었습니다. \n";




}
