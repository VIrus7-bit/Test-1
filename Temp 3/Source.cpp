#include <iostream>
#include <fstream>
#include <Windows.h>
#include <cassert>


int Sum(int a, int b)
{
	return { a + b };
}

void TestSum()
{
	assert(Sum(2, 3) == 5);
	assert(Sum(-2, -3) == -5);
	assert(Sum(-2, 0) == -2);
	assert(Sum(-2, 2) == 0);
	std::cout << "Test OK" << std::endl;
}

int main()
{
	using namespace std;

	setlocale(LC_ALL, "Rus");
	system("chcp 1251");

	TestSum();
	return EXIT_SUCCESS;
}
