#include "AddRecuritInformation.h"
#include "RecuritInfo.h"
#include <string.h>

void AddRecuritInformation::addNewInfo(std::string input_job, int input_n_member, std::string input_due_date)
{
	RecuritInfo::addInfo(input_job, input_n_member, input_due_date);
}

