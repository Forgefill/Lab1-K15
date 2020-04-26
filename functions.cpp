#include "functions.h"
#include<iostream>

void AboutA(char* string1, char*string2)
{
	std::cout << "����������� ������ � ������������� �������� ����� �-15 ����� �������"<<std::endl;
	std::cout << "����i�� ����� ������" << std::endl;
	std::cin >> string1;
	std::cout << "����i�� ����� ������" << std::endl;
	std::cin >> string2;
	std::cout <<std::endl<< "����i�� �����" << std::endl;
	std::cout << "\t1 - ������ ������� strlen\n\t2 - ������ ������� strcmp\n\t3 - ������ strncmp ����i�� �i���i��� ������i� ��� �����i���";
	std::cout << "\n\t4 - ������ strchr\n\t5 - ������ strcpy\n\t6 - ������ strncpy\n\t7 - ������ strcat\n\t8 - ������ strncat";
	std::cout << "\n\t9 - ������ strstr\n\t10 - ������ strpbrk\n\t11 - ������ strspn\n\t12 - ������ strcspn\n\t13 - ������ strcpy_s";
	std::cout << "\n\t14 - ������ find_last_of\n\t15 - ������ find_first_of\n\t16 - ������ find_first_not_of";
	std::cout << "\n\t17 - ������ pop_back\n\t18 - ������ compare";
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
		std::cout << "����i�� �i���i��� ������i� ��� ���i������" << std::endl;
		std::cin >> N;
		std::cout << Mstrncmp(string1, string2, N);
		break;
	case 4:
		p = Mstrchr(string1, '�'); std::cout << p;
		break;
	case 5:
		std::cout << Mstrcpy(string1, string2);
		break;
	case 6:
		std::cout << "����i�� �i���i��� ������i� ��� ���i������" << std::endl;
		std::cin >> N;
		std::cout << Mstrncpy(string1, string2, N);
		break;
	case 7:
		std::cout << Mstrcat(string1, string2);
		break;
	case 8:
		std::cout << "����i�� �i���i��� ������i� ��� �� ������ ������ � 2 ������" << std::endl;
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
			std::cout << "������ 2 ������� ������ ��� ���i������ � ������ 1"<<std::endl;
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
}                   //������� ������� � ������
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
}//������� ������� � ���� ������� ���� ���� ��� ������� ��� �������� � �������� 0(���) 1(1 ������) ��� -1(2 ������)
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
}//��� �� � ��������� ������� ����� � ��������� ������� ������� ������� ��� ���������
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
}//��������� �������� ������ ���� �������� � ������� � ������ � ������� �������� �� ��� ������
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
}//����� ����� ������ � ����� ������
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
}// ������ ��� �� � ��������� ������� ��� ����� �-������� � ����� ������ � �����
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
}//���� �� ����� ������ ����� � ������� �������� �� ����� ������
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
}//������ ��� ���� �� � ��������� �������, ��� �-��� ������� �� ��������� � ����� ������ �� ����� ������� ����������
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
}//���� ������ 2 � ������ 1 � ������� �������� �� ������� ������ 2 � ������ 1, ��� ������� ������ ���� 2 ���� � 1
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
}//������� �������� ������ 1 �� �������� ������� � ������ 2 ���� ��������� ����� ������� ���� �����,������ ������� �������
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
}//�������� ��� �������� ������ 2 �i ������� 1(�� ������� � �� ����)� �������� ������� ��������� �������
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
	/*������� ������� �������� ������ 2 � ������� 1,
	���� ��������� ������ ������� �� �������� ������� ������ 1 �� ����� ��������*/
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
}//��������� ������ ������� strcpy �������� �� ������� �������� ������2 � ������1
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
}//������� ��������� ������� ������� � ������ 1 ���� ������� � ������ 2
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
}//������� ��������� ������ ������� � ������ 1 �� �������� ������ 2
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
}//������� ��������� ������ ������ ������ 1 ���� �� ������� ������� ������� � ������ 2
char* Mpop_back(char*str)
{
	int i = Mstrlen(str);
	str[i - 1] = '\0';
	return str;
}//��������� ���������� �������� ������
int Mcompare(char*string1, char*string2)
{
	int i = Mstrlen(string1);
	int j = Mstrlen(string2);
	if (i == j) return 0;
	else if (i > j) return -1;
	else if (i < j)return 1;
}//������� ������� 2-� ����� � 1-�