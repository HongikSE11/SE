#include "SignUpUI.h"
#include <string>
#include <stdio.h>
#include <iostream>


#include <fstream>
using namespace std;
void SignUPUI::startinterface() {
	cout << "ȸ������ ����\n";

	
}

void SignUPUI::selectType() {
	cout << "ȸ��Ÿ���� ���ÿ� 1.ȸ��ȸ�� 2.�Ϲ�ȸ��\n";

	cin >> usertype;

}
void SignUPUI::putInfo() {
	cout << "�̸� ,��ȣ ,ID, PW �� �Է��Ͻÿ� \n";
	cin >> name;
	cin >> num;
	cin >> ID;
	cin >> PW;




}
void SignUPUI::ShowCompleteMessage() {
	cout << "ȸ�� ������ �Ϸ� �Ǿ����ϴ�. \n";
	



}
