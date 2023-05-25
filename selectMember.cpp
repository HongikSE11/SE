//헤더 선언
#include "selectMember.h"
#include "logIn.h"
#include "RecuritInfo.h"
#include "ApplyInfo.h"
#include <string.h>

void selectMember::memberInfo() 
{
  int user_type = logIn::cheakloginInfo();  //회원 종류 판별
  if(user_type == 1)
    RecuritInfo::getRecuritInfoDetails();
  else
    ApplyInfo::getApplyInfoDetails();
}
