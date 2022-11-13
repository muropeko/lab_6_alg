// lab_6_2_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 7


#include <iostream>
#include <time.h>
using namespace std;
void randlist(int* a, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void out(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
	cout << endl;
}
int Max(int* a, const int size)
{
	int max = a[0];
	for (int i = 1; i < size; i++)
		if (a[i] > max)
			max = a[i];
	return max;
}

int Min(int* a, const int size) {
	int min = a[size-1];
	for (int i = 1; i < size; i++)
		if (a[i] < min)
			min = a[i];
	return min;

}

int main()
{
	srand((unsigned)time(NULL)); 

	int p;
	cin >> p;

	int* q = new int[p];

	int Low = -10;
	int High = 10;

	randlist(q, p, Low, High);
	out(q, p);
	cout << "max = " << Max(q, p) << endl;
	cout << "min = " << Min(q, p) << endl;

	return 0;
}