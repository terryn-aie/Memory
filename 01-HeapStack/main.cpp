#include <iostream>

int diff(int * numA, int * numB)
{
	return *numA - *numB;
}

void arrPop(int * arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr[i] = (i + 1) * 3;
	}
}

void arrPrint(int * arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
}

int main()
{
	// Heap Allocated Object
	int * wholeNum   = new int(1);
	float * wholeFlt = new float(1.0f);
	bool * aBool     = new bool(true);

	int * wholeNums = new int[5];
	float * wholeFlts = new float[5];
	bool * theBooleans = new bool[5];

	delete wholeNum;
	delete wholeFlt;
	delete aBool;

	delete[] wholeNums;
	delete[] wholeFlts;
	delete[] theBooleans;

	// Subtracting Heap Allocated Numbers
	int * a = new int(5);
	int * b = new int(1);

	int res = diff(a, b);
	std::cout << res << std::endl;

	delete a;
	delete b;

	// Heap Allocated Integer Array
	int * numbers = new int[100];

	for (int i = 0; i < 100; ++i)
	{
		numbers[i] = i+1;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << numbers[i] << std::endl;
	}

	delete[] numbers;

	// == OPEN ==
	int * nummmz = new int[100];

	arrPop(nummmz, 100);

	arrPrint(nummmz, 100);

	int * singleNum = new int;

	arrPop(singleNum, 1);

	std::cout << *singleNum << std::endl;

	// heap-alloc arr of numz

	std::cout << "Howdy! How many?" << std::endl;
	int qty = 0;

	std::cin >> qty;
	int * inputs = new int[qty];

	// ask for numbers
	for (int i = 0; i < qty; ++i)
	{
		std::cout << "What's number " << i + 1 << "?" << std::endl;

		int input = -1;
		std::cin >> input;

		inputs[i] = input;
	}

	int evens = 0;

	// determine odds n' evens
	for (int i = 0; i < qty; ++i)
	{
		if (inputs[i] % 2 == 0) { evens++; }
	}

	int odds = qty - evens;

	if (evens > odds)
	{
		std::cout << "EVEN LOVER";
	}
	else if (odds > evens)
	{
		std::cout << "ODD LOVER";
	}
	else
	{
		std::cout << "EQUAL LOVER";
	}

	delete[] inputs;

	// adding up to 21

	std::cout << "How many?" << std::endl;

	int count = 0;
	std::cin >> count;

	int * numberz = new int[count];

	for (int i = 0; i < count; ++i)
	{
		std::cout << "Okay, what's num " << i + 1 << "?" << std::endl;

		int userInput = 0;
		std::cin >> userInput;

		numberz[i] = userInput;
	}

	int total = 0;
	for (int i = 0; i < count; ++i)
	{
		// add to total
		total += numberz[i];
	}

	if (total == 21) { std::cout << "You can add after all!" << std::endl; }
	else			 { std::cout << "Have you considered taking math classes?" << std::endl; }

	delete[] numberz;

	delete[] nummmz;
	delete singleNum;

	while (true) {} // keep open
}