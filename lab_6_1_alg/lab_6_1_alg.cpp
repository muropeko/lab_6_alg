// lab_6_1_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 6.1
// Пошук елементів одновимірного масиву ітераційним та рекурсивним способом
// Варіант 6


#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int sum)
{
	for (int i = 0; i < size; i++){
			a[i] = Low + rand() % (High - Low + 1);
			if(a[i] > 0 && (a[i]%5 == 0)) {
				a[i] = a[i] + 1;
			} 
			sum += a[i];
			cout << "num: " << a[i]  << setw(15) << "sum:" << sum << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 22;
	int a[n];
	int Low = -40;
	int High = 50;

	int sum = 0;

	Create(a, n, Low, High, sum);


	return 0;
}