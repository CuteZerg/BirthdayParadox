#include <iostream>
#include <cmath>
#include <random>
#include <Windows.h>

double CalculateByPeople(int peoples)
{
	if (peoples > 365)
		return 1.0;

	double result = 1.0;
	for (int i = 1; i <= peoples - 1; ++i)
		result *= (1 - (double)i / 365.0);

	result *= -1.0;
	result += 1;

	return result;
}

int main()
{
	int n;
	int flag = 1;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	while (flag)
	{
		std::system("cls");
		std::cin >> n;
		std::cout.precision(12);
		std::cout << 100 * CalculateByPeople(n) << "\\%\n";
		std::cin >> flag;
	}

	return 0;
}