#include <iostream>
#include"functions.h"

int main()
{
	setlocale(LC_ALL, "rus");
	char string1[100];
	char string2[100];
	int a = 0;

	AboutA(string1, string2);
	std::cin >> a;
	Process(a,string1,string2);


	system("pause");
	return 0;
}
//Mstrspn problem;