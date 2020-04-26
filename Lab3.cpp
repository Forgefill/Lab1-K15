#include<iostream>
#include<ctime>

int hello()
{
	std::cout << "Лабораторна робота студента групи К-15 Бубка Михайла\n\n";
    
	std::cout << "будь-ласка оберiть метод заповнення масиву\n\n 1 - заповнення масиву з клавiатури\n 2 - заповнення масиву рандомними числами";
	std::cout << "\n натиснiть будь-яку iншу клавiшу для виходу\n";
	int a;
	std::cin >> a;
	if (a == 1 || a == 2)

	{
    if (a == 1)  std::cout << "\nзаповнiть масив з клавiатури\n";
	else if (a == 2)  std::cout << "\nмасив заповнений рандомними числами\n";
		return a;
	}
	else return 0;
}
void filling(int &x, int a,int &i)
{   
	if (a == 1)
	{

		std::cout << "\nвведiть " << i << "-й елемент: ";
		if (!(std::cin >> x))
		{
			std::cout << "\nви ввели невiрне значення спробуйте ще раз";
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
	std::cout << "введiть елемент який ви хочете додати: \n";
	std::cin >> b;
	return b;
}
int step2()
{   
	int a = 0;
	std::cout << "масив заповнений оберiть наступну дiю:\n 1 - додати елемент в массив пiсля останнього елемента з мiнiмальним значенням\n";
	std::cout << " 2 - вiдсортувати масив(selection sort за зростанням) \n\n";
	std::cout << " натиснiть будь-яку iншу клавiшу для виходу з програми\n";
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