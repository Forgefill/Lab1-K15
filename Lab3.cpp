#include<iostream>
#include<ctime>

int hello()
{
	std::cout << "����������� ������ �������� ����� �-15 ����� �������\n\n";
    
	std::cout << "����-����� ����i�� ����� ���������� ������\n\n 1 - ���������� ������ � ����i�����\n 2 - ���������� ������ ���������� �������";
	std::cout << "\n ������i�� ����-��� i��� ����i�� ��� ������\n";
	int a;
	std::cin >> a;
	if (a == 1 || a == 2)

	{
    if (a == 1)  std::cout << "\n������i�� ����� � ����i�����\n";
	else if (a == 2)  std::cout << "\n����� ���������� ���������� �������\n";
		return a;
	}
	else return 0;
}
void filling(int &x, int a,int &i)
{   
	if (a == 1)
	{

		std::cout << "\n����i�� " << i << "-� �������: ";
		if (!(std::cin >> x))
		{
			std::cout << "\n�� ����� ���i��� �������� ��������� �� ���";
			std::cin.clear();
			std::cin.ignore(std::cin.rdbuf()->in_avail());
			i--;
		}
		else return ;
    }
	if (a == 2)
	{
		 srand(rand()+time(NULL));
	    x = rand()%12;
		return ;
	}
}
void swap(int &x, int &y)
{
	y = x;
}
int add()
{
	int b;
	std::cout << "����i�� ������� ���� �� ������ ������: \n";
	std::cin >> b;
	return b;
}
int step2()
{   
	int a = 0;
	std::cout << "����� ���������� ����i�� �������� �i�:\n 1 - ������ ������� � ������ �i��� ���������� �������� � �i�i������� ���������\n";
	std::cout << " 2 - �i���������� �����(selection sort �� ����������) \n\n";
	std::cout << " ������i�� ����-��� i��� ����i�� ��� ������ � ��������\n";
	std::cin >> a;
	return a;
}
void sortswap(int &x, int &y)
{
	int m = 0;
	m = x;
	x = y;
	y = m;
}
void output(int &x, int &i)
{
	std::cout << x << " ";
	if (i == 4 || i == 9 || i == 14) std::cout << std::endl;
}