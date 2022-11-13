// lab_6_2_rec.cpp
// Довгошиї Анастасії
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами
// Варіант 7


#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void randlist(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		randlist(a, size, Low, High, i + 1);
}

void out(int* a, const int size, int i)
{
	cout << "a[" << setw(2) << i << " ] = " << setw(4) << a[i] << endl;
	if (i < size - 1)
		out(a, size, i + 1);
	else
		cout << endl;
}
int Max(int* a, const int size, int i, int max)
{
	if (a[i] > max)
		max = a[i];
	if (i < size - 1)
		return Max(a, size, i + 1, max);
	else
		return max;
}

int Min(int* a, const int size, int i, int min) {
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;

}


int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

	int p;
	cin >> p;
	int* q = new int[p];

	int Low = -10;
	int High = 10;

	randlist(q, p, Low, High, 0);
	out(q, p, 0);
	cout << "max = " << Max(q, p, 1, q[0]) << endl;
	cout << "min = " << Min(q, p, 1, q[0]) << endl;

	return 0;




}


