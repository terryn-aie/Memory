#include <iostream>
#include <cassert>
#include <iostream>

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

void counterThing()
{
	static int ct = 0;
	ct++;

	std::cout << ct << std::endl;
}

void releaseHalfLove()
{
	static int counter = 0;

	std::cout << "The game, Half-Love " << counter+1 << " was released!" << std::endl;

	// ++val // PREincrement, changes before evaluation
	// val++ // POSTincrement, changes after evaluation

	counter = ++counter % 2;
}

void stepFizzBuzz()
{
	static int counter = 1;

	if (counter % 3 == 0)
	{
		std::cout << "FIZZ";
		if (counter % 5 == 0)
		{
			std::cout << "BUZZ";
		}
	}
	else if (counter % 5 == 0)
	{
		std::cout << "BUZZ";
	}
	else
	{
		std::cout << counter;
	}
	
	counter++;
	std::cout << std::endl;
}

float divide(float lhs, float rhs)
{
	assert(rhs != 0.0f && "Division by zero detected!");

	return lhs / rhs;
}

void callMeMaybe()
{
	static int counter = 0;

	if (counter == 0)
	{
		std::cout << "Howdy Partnder!" << std::endl;
	}
	else if (counter == 1)
	{
		std::cout << "It's a me, John MADDEN!" << std::endl;
	}
	else if (counter == 2)
	{
		std::cout << "WOWOW" << std::endl;
	}
	else if (counter == 3)
	{
		std::cout << "test" << std::endl;
	}


	counter = ++counter % 4;
}

int& picker(int& optA, int& optB, int& optC)
{
	static int counter = 0;

	switch (counter++ % 3)
	{
	case 0:
		return optA;
	case 1:
		return optB;
	case 2:
		return optC;
	default:
		return optA;
	}
}

int arrayCopy(int * srcArr, size_t srcSize,
	int * dstArr, size_t dstSize)
{
	assert(dstSize >= srcSize);
}

void gridGen(int width, int height)
{
	assert(width > -1 &&
		   height > -1);
}

int main()
{
	// CLOSED
	for (int i = 0; i < 4; ++i)
	{
		releaseHalfLove();
	}

	for (int i = 0; i < 20; ++i)
	{
		stepFizzBuzz();
	}

	std::cout << counter << std::endl;
	increment();
	std::cout << counter << std::endl;
	decrement();
	std::cout << counter << std::endl;
	increment();
	std::cout << counter << std::endl;

	std::cout << divide(5.0f, 1.0f) << std::endl;

	// OPEN

	for (int i = 0; i < 12; ++i)
	{
		callMeMaybe();
	}

	int a = 2;
	int b = 4;
	int c = 6;

	std::cout << picker(a, b, c) << std::endl;
	std::cout << picker(a, b, c) << std::endl;
	std::cout << picker(a, b, c) << std::endl;
	std::cout << picker(a, b, c) << std::endl;
	std::cout << picker(a, b, c) << std::endl;
	std::cout << picker(a, b, c) << std::endl;





	while (true) {}







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
		counterThing();
	}

	// Global Variables (w/ extern! :D)
	std::cout << globalOffensive << std::endl;
	makeItOne();
	std::cout << globalOffensive << std::endl;
	makeItTwo();
	std::cout << globalOffensive << std::endl;

	while (true) {}
}