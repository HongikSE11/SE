#include "selectMemberUI.h"
#include "selectMember.h"

#include <iostream>
#include <string.h>
#include <stdio.h>


#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"



void selectMemberUI::startInterface()
{
  // main
}

void selectMemberUI::showUserInfo() //...
{
	FILE* out_fp = fopen(OUTPUT_FILE_NAME, "w+");
	fprintf(out_fp, "%s %d", job, num);
}