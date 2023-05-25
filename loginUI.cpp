#include "loginUI.h"


using namespace std;
void loginUI::startinterface() {
	cout << "로그인 시작\n";


}

void loginUI::ShowCompleteMessage() {
	cout << " 로그인 완료\n";

}

void loginUI::inputinfo() {
	cout << "ID PW를 입력하시오.\n";
	cin >> ID;
	cin >> PW;


}