#include <iostream>

using namespace std;

void PrintNambers(int N, int M)
{
	if (N <= M)
	{
		cout << N << endl;
		PrintNambers(N + 1, M);
	}
}

void PrintReverseNumbers(int M, int N)
{
	if (M >= N)
	{
		cout << M << endl;
		PrintReverseNumbers(N - 1, M);
	}
}

int CalculatePower(int base, int power)
{
	if (power == 0)
		return 1;
	else
		return (base * CalculatePower(base, power -1));
}

int main()
{
	 PrintNambers(1, 5);
	 PrintReverseNumbers(10, 1);
	 cout << CalculatePower(2, 4);

	return 0;
}
