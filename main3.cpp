#include <iostream>
#include "Lab3.h"

;
int main()
{
	setlocale(LC_ALL, "rus");
	const int size = 20;                 //    розмір масиву
	int useability = 12, arr[size]{};                 //    к-сть простору який буде використовуватися(програма передбачає можливість його зміни)

	int a = hello();                       //привітання
	if (a == 0) return 0;

	for (int i = 0; i < useability; i++)   // заповнення масиву
	{
		filling(arr[i], a, i);
	}
	std::cout << std::endl;

	int c = step2();                      // масив заповнений починається виконання кроку 2
 if (c == 1)                      //додавання елементу
	  {
		int number, small = arr[0];
	
		for (int k = 0; k < useability; k++)  //пошук останнього елемента з мін. значенням
		{
			if (small >= arr[k])
			{
				small = arr[k];
			    number = k;                  // його номер
			} 

		}
		for (int j = useability; j > number; j--)   // додавання елементу після останнього елемента з мін. значенням
		{
			swap(arr[j], arr[j + 1]);
		}
		arr[number + 1] = add();
		useability++;                    // збільшення к-сть простору який використовується в масиві              
	}
 else if (c == 2)
 {
	 for (int s = 0; s < useability; s++)                     //сортування масиву
	 {
		 for (int d = 0 + s; d < useability; d++)
		 {
			 if (arr[s] >= arr[d]) sortswap (arr[s], arr[d]);
		 }
	 }
 }
 else return 0;
 for (int i = 0; i < useability; i++)                              //виведення масиву на екран
  {
	 output(arr[i], i);
  }
 system("pause");
 return 0;
}