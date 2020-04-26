#include "functions.h"
#include<iostream>

void AboutA(char* string1, char*string2)
{
	std::cout << "Лабораторна робота з програмування студента групи К-15 Бубки Михайла"<<std::endl;
	std::cout << "введiть першу строку" << std::endl;
	std::cin >> string1;
	std::cout << "введiть другу строку" << std::endl;
	std::cin >> string2;
	std::cout <<std::endl<< "оберiть пункт" << std::endl;
	std::cout << "\t1 - виклик функции strlen\n\t2 - виклик функции strcmp\n\t3 - виклик strncmp введiть кiлькiсть символiв для перевiрки";
	std::cout << "\n\t4 - виклик strchr\n\t5 - виклик strcpy\n\t6 - виклик strncpy\n\t7 - виклик strcat\n\t8 - виклик strncat";
	std::cout << "\n\t9 - виклик strstr\n\t10 - виклик strpbrk\n\t11 - виклик strspn\n\t12 - виклик strcspn\n\t13 - виклик strcpy_s";
	std::cout << "\n\t14 - виклик find_last_of\n\t15 - виклик find_first_of\n\t16 - виклик find_first_not_of";
	std::cout << "\n\t17 - виклик pop_back\n\t18 - виклик compare";
	return;
}
void Process(int a,char* string1,char*string2)
{
	int N = 0;
	char *p = nullptr;
	switch (a)
	{
	case 1:
		std::cout << Mstrlen(string1) << std::endl;
		break;
	case 2:
		std::cout << Mstrcmp(string1, string2);
		break;
	case 3:
		std::cout << "вкажiть кiлькiсть символiв для порiвняння" << std::endl;
		std::cin >> N;
		std::cout << Mstrncmp(string1, string2, N);
		break;
	case 4:
		p = Mstrchr(string1, 'к'); std::cout << p;
		break;
	case 5:
		std::cout << Mstrcpy(string1, string2);
		break;
	case 6:
		std::cout << "вкажiть кiлькiсть символiв для копiювання" << std::endl;
		std::cin >> N;
		std::cout << Mstrncpy(string1, string2, N);
		break;
	case 7:
		std::cout << Mstrcat(string1, string2);
		break;
	case 8:
		std::cout << "вкажiть кiлькiсть символiв яку ви хочете додати з 2 строки" << std::endl;
		std::cin >> N;
		std::cout << Mstrncat(string1, string2, N);
		break;
	case 9:
		std::cout << Mstrstr(string1, string2);
		break;
	case 10:
		std::cout << Mstrpbrk(string1, string2);
		break;
	case 11:
		std::cout << Mstrspn(string1, string2);
		break;
	case 12:
		std::cout << Mstrcspn(string1, string2);
		break;
	case 13:
		p = Mstrcpy_s(string1, 100, string2); 
		if (p == nullptr)
		{
			std::cout << "строка 2 занадто велека для копiювання в строку 1"<<std::endl;
		}
		else std::cout << p;
		break;
	case 14:
		std::cout << Mfind_last_of(string1, string2);
		break;
	case 15:
		std::cout << Mfind_first_of(string1, string2);
		break;
	case 16:
		std::cout << Mfind_first_not_of(string1, string2);
		break;
	case 17:
		std::cout << Mpop_back(string1);
		break;
	case 18:
		std::cout << Mcompare(string1, string2);
		break;
	}


}
int Mstrlen(char* arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		arr[i];
		++i;
	}
	return i;
}                   //кількість символів в строці
int Mstrcmp(char* arr1, char* arr2)
{
	int i = 0;
	int k = 0;
	int j = 0;
	while (arr1[i] == arr2[i])
	{
		++i;
		if (arr1[i] == '\0') break;
		if (arr2[i] == '\0') break;
		++j;
		++k;
	}
	if (arr1[k] == arr2[j]) return 0;
	else if (arr1[k] > arr2[j]) return 1;
	else if (arr1[k] < arr2[j]) return-1;
	return 0;
}//порівнює символи в двох строках якщо вони різні порівнює їхні значення і виводить 0(рівні) 1(1 більший) або -1(2 більший)
int Mstrncmp(char* arr1, char* arr2,int N)
{
	int i = 0;
	int k = 0;
	int j = 0;
	while (arr1[i] == arr2[i])
	{
		++i;
		if (arr1[i] == '\0') break;
		if (arr2[i] == '\0') break;
		if (N == i) break;
		++j;
		++k;
	}
	if (arr1[k] == arr2[j]) return 0;
	else if (arr1[k] < arr2[j]) return 1;
	else if (arr1[k] > arr2[j]) return-1;
	return 0;
}//теж що і попередня функція тільки з можливістю вказати кількість символів для порівняння
char * Mstrchr(char * arr, int symbol)
{
	char * p = nullptr;
	int i = 0;
	while (arr[i] != 0)
	{
		if (arr[i] == symbol)
		{
			p = &arr[i];
			return p;
		}
		++i;
	}
	return p;
}//знаходить потрібний символ який передали в функцію у строці і повертає вказівник на цей символ
char * Mstrcpy(char * string1, char * string2)
{
	if (Mstrlen(string1) < Mstrlen(string2))
	{
		std::cout << "can not copy str2 into str1";
		return nullptr;
	}
	int i = 0;
	while (string2[i] != '\0')
	{
		string1[i] = string2[i];
		++i;
	}
	string1[i] = string2[i];
	return &string1[0];
}//копіює другу строку в першу строку
char * Mstrncpy(char * string1, char * string2, int N)
{
	if ((Mstrlen(string1) < N)||(Mstrlen(string1)<Mstrlen(string2)))
	{
		std::cout << "can not copy str2 into str1";
		return nullptr;
	}
	int i = 0;
	while (string2[i] != '\0')
	{
		string1[i] = string2[i];
		++i;
		if (i == N) return &string1[0];
	}
	string1[i] = string2[i];
	return &string1[0];
}// робить теж що й попередня функція але копіює н-символів в першу строку з другої
char * Mstrcat(char * string1, char * string2)
{
	int i = Mstrlen(string1);
	int j = 0;
	while (string2[j] != '\0')
	{
		string1[i] = string2[j];
		++j;
		++i;
	}
	string1[i] = '\0';
	return string1;
}//додає до першої строки другу і повертає вказівник на першу строку
char * Mstrncat(char * string1, char * string2, int N)
{
	int i = Mstrlen(string1);
	
	if (N > i) N = i;
	int j = 0;
	while (string2[j] != '\0')
	{
		if (j == N|| string2[j]=='\0');
		string1[i] = string2[j];
		++j;
		++i;
	}
	string1[i] = '\0';
	return string1;
}//робить теж саме що й попередня функція, але к-сть символів які додаються з другої строки до першої вводить користувач
char * Mstrstr(char * string1, char * string2)
{
	int i = Mstrlen(string2);
	
	int j = 0, s = 0;
	while (string1[j] != '\0')
	{
		if (string1[j] == string2[s])
		{
			++s;
			++j;
			if (s == i) return &string1[j - i];
		}
		else
		{
			++j;
			s = 0;
		}
	}
	char *p = nullptr;
	return p;
}//шукає строку 2 в строці 1 і повертає вказівник на початок строки 2 в строці 1, або повертає нулптр якщо 2 немає в 1
char * Mstrpbrk(char * string1, char * string2)
{
	int i = 0;
	int j = 0;
	while (string2[i] != '\0')
	{
		while (string1[j] != '\0')
		{
			if (string2[i] == string1[j]) return &string1[j];
			++j;
		}
		++i;
	}
	char *p = nullptr;
	return p;
}//функція перевіряє строку 1 на наявність символів зі строки 2 якщо знаходить такий повертає його адрес,інакше повертає нуллптр
int Mstrspn(char * string1, char * string2)
{
	int i = 0;
	int k = 0;
	int s = 0;
	while (string2[i] != '\0')
	{
		if (string2[i] == string1[k])
		{
			s = 1;
			++k;
		}
		if (string2[i] != string1[k]) s = 0;
		if (s == 0) return k;
		++i;
	}
	return k;
}//перевіряє збіг елементів строки 2 зi строкою 1(від початку і до кінця)і виводить довжину однакових символів
int Mstrcspn(char * string1, char * string2)
{
	int i = 0;
	int j = 0;
	while (string2[i] != '\0')
	{
		j = 0;
		while (string1[j] != '\0')
		{
			if (string2[i] == string1[j]) return j;
			++j;
		}
		++i;
	}
	return j;
	/*функція порівнює елементи строки 2 зі строкою 1,
	якщо знаходить схожий елемент то виводить довжину строки 1 до цього елементу*/
}
char * Mstrcpy_s(char * string1, int size, char * string2)
{
	char*p = nullptr;
	int j = Mstrlen(string2);
	if (size < j + 1) return p;

	int i = 0;

	while (string2[i] != '\0')
	{
		string1[i] = string2[i];
		++i;
	}
	string1[i] = string2[i];
	return &string1[0];
}//безпечний варіант функції strcpy перевіряє чи можливо записати стринг2 в стринг1
int Mfind_last_of(char*str1, char* str2)
{
	int i = 0, j = 0;
	int k = -1;
	while (str2[i] != '\0')
	{

		while (str1[j] != '\0')
		{
			if (str2[i] == str1[j] && k<j) k = j;
			++j;
		}
		j = 0;
		++i;
	}
	return k + 1;
}//функція знаходить останній елемент в строці 1 який наявний у строці 2
int Mfind_first_of(char*str1, char* str2)
{
	int j = 0, i = 0;
	int k = INT_MAX;
	while (str2[j] != '\0')
	{

		while (str1[i] != '\0')
		{
			if (str2[j] == str1[i] && k > i) k = i;
			++i;
		}
		i = 0;
		++j;
	}
	return k + 1;
}//функція знаходить перший елемент у строці 1 що належить строці 2
int Mfind_first_not_of(char*str1, char* str2)
{
	int j = 0, i = 0;
	int s = Mstrlen(str2);
	while (str1[i] != '\0')
	{
		j = s;
		while (j != -1)
		{
			if (str2[j] == str1[i])break;
			else if (str2[j] != str1[i] && j == 0)return i + 1;
			--j;
		}
		++i;
	}
	return 0;
}//функція знаходить перший символ строки 1 який не дорівнює жодному символу з строки 2
char* Mpop_back(char*str)
{
	int i = Mstrlen(str);
	str[i - 1] = '\0';
	return str;
}//видалення останнього елементу строки
int Mcompare(char*string1, char*string2)
{
	int i = Mstrlen(string1);
	int j = Mstrlen(string2);
	if (i == j) return 0;
	else if (i > j) return -1;
	else if (i < j)return 1;
}//функція порівнює 2-й рядок з 1-м