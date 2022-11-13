// lab_6_3_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 6.3
// Опрацювання одновимірних масивів за допомогою звичайних функцій та шаблонів
// Варіант 6


#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int sum)
{
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
		if (a[i] > 0 && (a[i] % 5 == 0)) {
			a[i] = a[i] + 1;
		}
		sum += a[i];
		cout << "num: " << a[i] << setw(15) << "sum:" << sum << endl;
	}
}

int main()
{
	srand((unsigned)time(NULL));
	const int n = 10;
	int a[n];

	int sum = 0;

	int A, B;
	cout << "A: "; cin >> A;
	cout << "B: "; cin >> B;

	Create(a, n, A, B, sum);
	return 0;
}