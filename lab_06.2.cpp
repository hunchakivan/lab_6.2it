#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High) {
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}

void Print(int* a, const int size) {
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}

int Avg(int* a, const int size) {
	int S = 0;
	int Q = 0;
	for (int i = 0; i < size; i++)
		if (a[i] % 2 != 0) {
			S += a[i];
			Q += 1;
		}
	return S / Q;
}

int main() {
	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = 1;
	int High = 100;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "Avg = " << Avg(a, n) << endl;
	return 0;
}