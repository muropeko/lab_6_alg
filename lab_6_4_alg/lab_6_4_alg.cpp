// lab_6_4_alg.cpp
// Довгошиї Анастасії
// Лабораторна робота № 6.4
// Опрацювання та впорядкування одновимірних динамічних масивів
// Варіант 6

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int* b)
{
	for (int i = 0; i < size; i++) {
		a[i] = Low + rand() % (High - Low + 1);
		b[i] = {};
	}
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << "a[" << i << "] = " << a[i] << endl;
	cout << "-------" << endl;
}

void Sort(int* a, const int size)
{ 
	int tmp;
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
			if (a[j] == 0)
			{
				tmp = a[j];
				a[j + 1] = tmp;
			}
}
void Merge(int* a, const int n, int* b, const int k, int* c)
{
	int i = 0; 
	int j = 0; 
	int l = 0; 
	while (i < n && j < k) 
	{
		if (a[i] < b[j]) 
			c[l++] = a[i++];
		else 
			c[l++] = b[j++];
	}
	while (i < n)  
		c[l++] = a[i++]; 
	while (j < k) 
		c[l++] = b[j++]; 
}

int Min(int* a, const int size, int i, int min) {
	if (a[i] < min)
		min = a[i];
	if (i < size - 1)
		return Min(a, size, i + 1, min);
	else
		return min;
}

int Sum(int* a, const int size)
{
	int S = 0;
	for (int i = 1; i < size-1; i++)
		S += a[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL)); 

	int A, B, n;
	cout << "Enter min: "; cin >> A;
	cout << "Enter max: "; cin >> B;
	cout << "Enter the size: "; cin >> n;

	int* a = new int[n];
	int* b = new int[n];

	int q = n * 2;

	int* c = new int[q];

	Create(a, n, A, B, b);
	Sort(a, n);
	Print(a, n);

	Sort(b, n);
	Print(b, n);

	Merge(a, n, b, n, c);
	Print(c, q);

	cout << "min:" << Min(a, n, 1, a[0]) << endl;
	cout << "sum: = " << Sum(a, n) << endl;
	return 0;
} 