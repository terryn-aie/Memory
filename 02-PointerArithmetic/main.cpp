#include <iostream>
#include <cstdio>

// Find Count
int findCount(int target, int * arr, int size)
{
	int freq = 0;

	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) == target) { freq++; }
	}

	return freq;
}

// Array Copy
void arrCopy(int * srcArr, int srcSize, int * dstArr, int dstSize)
{
	for (int i = 0; i < srcSize; ++i)
	{
		*(dstArr + i) = *(srcArr + i);
	}
}

// Array Reversal
void arrReversal(int * arr, int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		// record front value
		int temp = *(arr + i);

		// swap
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
	}
}

// String Reversal
void cstrReversal(char * arr, int size)
{
	// manually determine the last valid character
	int len = 0;
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) == '\0') { break; }
		len++;
	}

	for (int i = 0; i < len / 2; ++i)
	{
		// record front value
		int temp = *(arr + i);

		// swap
		*(arr + i) = *(arr + len - 1 - i);
		*(arr + len - 1 - i) = temp;
	}
}

void printFloats(float * arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << std::endl;
	}
}

void printInts(int * arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i) << std::endl;
	}
}

int arraySum(int * arr, int size)
{
	int total = 0;

	for (int i = 0; i < size; ++i)
	{
		total += *(arr + i);
	}

	return total;
}

float arrayAvg(int * arr, int size)
{
	int total = arraySum(arr, size);

	return total / (float)size;
}

int main()
{
	// Pointer Arithmetic
	int a = 0;
	int b = 1;

	struct
	{
		int lol;
		int wtf;
		int brb;
	} thing;

	thing.lol = 2;
	thing.wtf = 3;
	thing.brb = 4;

	std::cout << thing.lol << std::endl;
	std::cout << thing.wtf << std::endl;
	std::cout << thing.brb << std::endl;
	std::cout << std::endl;

	std::cout << *((&thing.lol) + 0) << std::endl;
	std::cout << *((&thing.lol) + 1) << std::endl;
	std::cout << *((&thing.lol) + 2) << std::endl;
	std::cout << std::endl;


	for (int i = 0; i < 3; ++i)
	{
		std::cout << *((&thing.lol) + i) << std::endl;
	}

	// Pointer Arithmetic 2: Electric Boogaloo (arrays)
	int * hArr = new int[2];

	hArr[0] = 1;
	hArr[1] = 2;

	std::cout << hArr[0] << std::endl;
	std::cout << hArr[1] << std::endl;

	std::cout << hArr[0] << std::endl;
	std::cout << *(hArr+1) << std::endl;

	int * arrLarge = new int[100];
	int arrLargeStack[100];

	// iteration w/ subscript operator
	for (int i = 0; i < 100; ++i)
	{
		arrLarge[i] = i;
		arrLargeStack[i] = i;
	}

	// iteration w/ pointer arithmetic
	for (int i = 0; i < 100; ++i)
	{
		std::cout << *(arrLargeStack + i) << std::endl;
	}

	delete[] hArr;
	delete[] arrLarge;

	// Type Casting
	float dollars = 1.80f;

	std::cout << dollars << std::endl;
	std::cout << (int)dollars << std::endl;	// use the float as an int

	//======
	// OPEN
	//======

	float * arr = new float[10];
	for (int i = 0; i < 10; ++i) { arr[i] = i; }

	printFloats(arr, 10);

	int * iArr = new int[10];
	for (int i = 0; i < 10; ++i) { iArr[i] = i; }

	int sum = arraySum(iArr, 10);
	std::cout << "The sum of the array is..." << sum << std::endl;

	float avg = arrayAvg(iArr, 10);
	std::cout << "The AVG of the array is..." << avg << std::endl;

	// terry testbed

	int aa = 10;
	int ab = 11;

	struct
	{
		int a;
		int b;
	} test;

	test.a = 1;
	test.b = 2;

	//std::cout << test.a << std::endl;
	//std::cout << *((&test.a)+1) << std::endl;

	// FINDCOUNT
	int * fcArr = new int[8];
	for (int i = 0; i < 8; ++i) { *(fcArr+i) = i; }

	int freq = findCount(4, fcArr, 8);

	int * cpArr = new int[8];
	arrCopy(fcArr, 8, cpArr, 8);

	std::cout << "BEFORE" << std::endl;
	printInts(fcArr, 7);
	arrReversal(fcArr, 7);
	std::cout << "AFTER" << std::endl;
	printInts(fcArr, 7);

	char * name = new char[6];
	name[0] = 'T';
	name[1] = 'e';
	name[2] = 'r';
	name[3] = 'r';
	name[4] = 'y';
	name[5] = '\0';

	cstrReversal(name, 6);

	std::cout << name << std::endl;

	while (true) {} // keep open

	delete[] fcArr;
	delete[] cpArr;
}