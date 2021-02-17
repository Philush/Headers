#include <iostream>
#include "MyString.h"


int main()
{
	char sampleStr[20]{ "Hello!" };
	char protStr[20]{"hello!"};

	//std::cout << R"(Length of string ")" << sampleStr << R"(" = )"
		//<< strLen(sampleStr) << std::endl;

	int res = strCmp(sampleStr, protStr);

	std::cout <<  "First String: " << sampleStr << std::endl << "Second String: " << protStr << std::endl << "Result: " << res ;


	return 0;
}