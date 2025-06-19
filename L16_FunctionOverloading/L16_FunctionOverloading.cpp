#include <iostream>
double MySum(double a, double b)
{
	return (a + b);
}

int MySum(int a, int b)
{
	return (a + b);
}

int MySum(int a, int b, int c)
{
	return (a + b + c);
}

int MySum(int a, int b, int c, int d)
{
	return (a + b + c + d);
}

int main()
{
	std::cout << MySum(10, 20) << std::endl;
	std::cout << MySum(10.1, 20.3) << std::endl;
	std::cout << MySum(10, 20, 30) << std::endl;
	std::cout << MySum(10, 20, 30, 40) << std::endl;
}
