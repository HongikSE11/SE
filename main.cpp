// 헤더 선언
#include <stdio.h>
#include <string.h>
#include "AddRecuritInformation.h"
#include "AddRecuritInformationUI.h"
#include "Apply.h"
#include "ApplyInfo.h"
#include "CancelApplyInfo.h"
#include "CancelApplyInfoUI.h"
#include "CheckApplyInfomation.h"
#include "CheckApplyInfomationUI.h"
#include "CheckRecuritInfomation.h"
#include "CheckRecuritInfomationUI.h"
#include "Recurit.h"
#include "RecuritInfo.h"
#include "Signout.h"
#include "SignUP.h"
#include "SignUpUI.h"
#include "UserInfo.h"
#include "login.h"
#include "loginUI.h"
#include "logout.h"
#include "logoutUI.h"
#include "selectMember.h"
#include "selectMemberUI.h"

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
FILE* in_fp, * out_fp;

int main()
{
    // 파일 입출력을 위한 초기화
    FILE* in_fp = fopen(INPUT_FILE_NAME, "r+");
    FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");

    doTask();

    return 0;
}


void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0, menu_level_3 = 0;
    int is_program_exit = 0;

    while (!is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fscanf(in_fp, "%d %d ", &menu_level_1, &menu_level_2);


        // 메뉴 구분 및 해당 연산 수행
        switch (menu_level_1)
        {
        case 1:
        {
            switch (menu_level_2)
            {
            case 1:   //"1.1. 회원 가입“ 메뉴 부분
            {
                SignUp signup;
                signup.signupstart();
                break;
            }
            case 2: //"1.2 회원 탈퇴“ 메뉴 부분
            {
                SignOut signout;
                signout.ShowUserInfo();
             
                break;
            }

            }
        case 2:
            switch (menu_level_2)
            {
            case 1: //"2.1. 로그인“ 메뉴 부분
            {
                login loginstart;
                loginstart.loginstart();
                break;
            }
            case 2: //"2.2. 로그아웃“ 메뉴 부분
            {
                logout logoutstart;
                logoutstart logoutstart();
                break;
            }
            }
        case 3:
            switch (menu_level_2)
            {
            case 1: //"3.1. 채용 정보 등록“ 메뉴 부분
            {
                AddRecuritInfomationUI UI;
                UI.startInterface();
                UI.InputInfo();
                break;
            }
            case 2: //"3.2.  등록된 채용 정보 조회“ 메뉴 부분
            {
                CheckRecuritInfomationUI UI;
                UI.startInterface();
                UI.selectInfo();
                break;
            }
            }
        case 4:
            switch (menu_level_2)
            {
            case 1: //"4.1. 채용 정보 검색“ 메뉴 부분
            {
                CheckRecuritInfomationUI UI;
                UI.startInterface();
                UI.selectInfo();
                break;
            }
            case 2: //"4.2. 채용 지원“ 메뉴 부분
            {
                ApplyInfo applyInfo;
                applyInfo.addApplyInfo();
                break;
            }
            case 3: //"4.3. 지원 정보 조회“ 메뉴 부분
            {
                CheckApplyInformationUI UI;
                UI.startInterface();
                UI.selectInfo();
                break;
            }
            case 4: //"4.4. 지원 취소“ 메뉴 부분
            {
                CancelApplyInfoUI UI;
                UI.startInterface();
                break;
            }
            }
        case 5:
            switch (menu_level_2)
            {
            case 1: //"5.1. 지원 정보 통계“ 메뉴 부분
            {
                selectMemberUI selectMemberUIStart;
                selectMember selectMemberStart;
                
                selectMemberUIStart.startInterface();
                selectMemberStart.memberInfo();
                selectMemberUIStart.showUserInfo();
                break;
            }
            }
        case 6:
        {
            switch (menu_level_2)
            {
            case 1:   // "6.1. 종료“ 메뉴 부분
            {
                program_exit();
                is_program_exit = 1;
                break;
            }
            }
        }
        return;
        }
    }
}


void program_exit()
{
    //exit program 
}
