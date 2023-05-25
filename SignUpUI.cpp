#include "SignUpUI.h"
#include <string>
#include <stdio.h>
#include <iostream>


#include <fstream>
using namespace std;
void SignUPUI::startinterface() {
	cout << "회원가입 시작\n";

	
}

void SignUPUI::selectType() {
	cout << "회원타입을 고르시오 1.회사회원 2.일반회원\n";

	cin >> usertype;

}
void SignUPUI::putInfo() {
	cout << "이름 ,번호 ,ID, PW 를 입력하시오 \n";
	cin >> name;
	cin >> num;
	cin >> ID;
	cin >> PW;




}
void SignUPUI::ShowCompleteMessage() {
	cout << "회원 가입이 완료 되었습니다. \n";
	



}
