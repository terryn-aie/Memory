#include <iostream>
#include <cassert>

#include "globals.h"

void diffArrays(int * arrA, size_t arrASize,
	            int * arrB, size_t arrBSize)
{
	assert(arrBSize <= arrASize);

	for (int i = 0; i < arrBSize; ++i)
	{
		arrA[i] -= arrB[i];
	}
}

void counter()
{
	static int ct = 0;
	ct++;

	std::cout << ct << std::endl;
}

int main()
{
	// Preprocessor Directives
	int numA[] = { 3, 2, 1 };
	int numB[] = { 3, 2, 1, 10, 12 };

	//diffArrays(numA, 3, numB, 5);

	for (int i = 0; i < 3; ++i)
	{
		std::cout << numA[i] << std::endl;
	}

	// Static Local Variables
	for (int i = 0; i < 50; ++i)
	{
		counter();
	}

	// Global Variables (w/ extern! :D)
	std::cout << globalOffensive << std::endl;
	makeItOne();
	std::cout << globalOffensive << std::endl;
	makeItTwo();
	std::cout << globalOffensive << std::endl;

	while (true) {}
}