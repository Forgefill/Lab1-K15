#include <iostream>
#include "Lab3.h"

;
int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 20;                 //    ����� ������
	int useability = 12, arr[size]{};                 //    �-��� �������� ���� ���� �����������������(�������� ��������� ��������� ���� ����)

	int a = hello();                       //���������
	if (a == 0) return 0;

	for (int i = 0; i < useability; i++)   // ���������� ������
	{
		filling(arr[i], a, i);
	}
	std::cout << std::endl;

	int c = step2();                      // ����� ���������� ���������� ��������� ����� 2
 if (c == 1)                      //��������� ��������
	  {
		int number, small = arr[0];
	
		for (int k = 0; k < useability; k++)  //����� ���������� �������� � ��. ���������
		{
			if (small >= arr[k])
			{
				small = arr[k];
			    number = k;                  // ���� �����
			} 

		}
		for (int j = useability; j > number; j--)   // ��������� �������� ���� ���������� �������� � ��. ���������
		{
			swap(arr[j], arr[j + 1]);
		}
		arr[number + 1] = add();
		useability++;                    // ��������� �-��� �������� ���� ��������������� � �����              
	}
 else if (c == 2)
 {
	 for (int s = 0; s < useability; s++)                     //���������� ������
	 {
		 for (int d = 0 + s; d < useability; d++)
		 {
			 if (arr[s] >= arr[d]) sortswap (arr[s], arr[d]);
		 }
	 }
 }
 else return 0;
 for (int i = 0; i < useability; i++)                              //��������� ������ �� �����
  {
	 output(arr[i], i);
  }
 system("pause");
 return 0;
}