#include <iostream>

struct Weapon
{
	int bluntDamage;
	int magicDamage;
	int bladeDamage;

	struct OwnerInfo
	{
		int playerID;
		bool isRare;
	};

	OwnerInfo owner;

	int& testVal;
};

void enhanceWeapon(Weapon& weap)
{
	weap.bluntDamage *= 2;
	weap.bladeDamage *= 2;
	weap.magicDamage *= 2;
}

void sum(int a, int b, int& c)
{
	c = a + b;
}

//int main()
//{
//	// References!
//	int hotdog = 10;			// primitive variable
//	int& dinosaur = hotdog;		// reference to hotdog
//	int* dinosaurPtr = &hotdog; // pointer to hotdog
//
//	int tacos = hotdog;			// copies the value of hotdog
//
//	hotdog = 15;
//
//	std::cout << hotdog << std::endl;
//	std::cout << dinosaur << std::endl;
//	std::cout << *dinosaurPtr << std::endl;
//
//	std::cout << "tacos" << std::endl;
//	std::cout << tacos << std::endl;
//
//	// References with Functions!
//
//	int valA = 1;
//	int valB = 2;
//	int valC = -1;
//
//	std::cout << valC << std::endl;
//
//	sum(valA, valB, valC);
//
//	std::cout << valC << std::endl;
//
//	// References with Structs!
//	Weapon hammer = {9001, 0,0,0,0, valA};
//	hammer.bluntDamage = 9001;
//	hammer.bladeDamage = 0;
//	hammer.magicDamage = 0;
//
//	std::cout << "BLADE " << hammer.bladeDamage << std::endl;
//	std::cout << "BLUNT " << hammer.bluntDamage << std::endl;
//	std::cout << "MAGIC " << hammer.magicDamage << std::endl;
//
//	enhanceWeapon(hammer);
//
//	std::cout << "BLADE " << hammer.bladeDamage << std::endl;
//	std::cout << "BLUNT " << hammer.bluntDamage << std::endl;
//	std::cout << "MAGIC " << hammer.magicDamage << std::endl;
//
//	int thing = -12;
//
//	Weapon arsenal[3] =
//	{
//		// Blunt   Magic   Blade   PID   Rarity
//		{9001,		0,		0,		{0, true}, thing},
//		{0,			9001,	0,		{0, true}, thing},
//		{0,			0,		8999,	{0, false}, thing}
//	};
//
//	for (int i = 0; i < 3; ++i)
//	{
//		int& pid = arsenal[i].owner.playerID;
//		std::cout << pid << std::endl;
//
//		if (pid == 0)
//		{
//			pid = -1;
//		}
//	}
//
//
//
//
//
//
//
//
//
//
//	// test
//	std::cout << arsenal[0].testVal << std::endl;
//
//	thing = 32;
//
//	std::cout << arsenal[0].testVal << std::endl;
//
//	while (true) {}
//
//}