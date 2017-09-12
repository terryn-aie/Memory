#include <iostream>
#include "AussiGotchi.h"
#include "Playlist.h"
using namespace std;

void product(float a, float b, float &c)
{
	c = a + b;
}

void swap(float& a, float &b)
{
	float temp = a;
	a = b;
	b = temp;
}

struct DumbIntArray
{
	int * arr;
	int size;
};

int accessDumbArray(DumbIntArray& dum, int idx)
{
#ifdef _DEBUG
	if (idx >= dum.size)
	{
		std::cerr << "Accessed invalid index!" << std::endl;
		abort();
	}
#endif // DEBUG

	return dum.arr[idx];
}

void inc()
{
	static int num = 0;
	num++;

	std::cout << num << std::endl;
}

int main()
{
	DumbIntArray dumb;
	dumb.arr = new int[10];
	dumb.size = 10;



	delete[] dumb.arr;

	for (int i = 0; i < 5; ++i)
	{
		inc();
	}

	while (true) {}

	/*int num = 0;
	float dec = 0;
	bool tf = false;
	char letter = 'a';



	int& numRef = num;
	float& decref = dec;
	bool& tfref = tf;
	char& letterref = letter;


	 product(3.7, 4.7, dec);
	 cout << dec;*/

	/*float a = 4;
	float b = 7;


	swap(a, b);

	cout << a << endl;
	cout << b << endl;

	Ausiigochi LittleTerry = { 50.f, 20.f, 35.f, 99.99f };
	
	cout << "Happiness: " << LittleTerry.happiness << endl;
	cout << "hungry: " << LittleTerry.hunger << endl;
	cout << "thirst: " << LittleTerry.thrist << endl;
	cout << "sanity: " << LittleTerry.sanity << endl;


	cuddleAussio(LittleTerry);
	feedAussio(LittleTerry);
	waterAussio(LittleTerry);
	abuseAussio(LittleTerry);

	cout << "Happiness: "<<LittleTerry.happiness << endl;
	cout << "hungry: " << LittleTerry.hunger << endl;
	cout << "thirst: " << LittleTerry.thrist << endl;
	cout << "sanity: " << LittleTerry.sanity << endl;
*/

	Track songs[7];
	songs[0].TrackName = "IdontKNow";
	songs[0].playTime = 3.70f;
	songs[1].TrackName = "PokeMon";
	songs[1].playTime = 2.50f;
	songs[2].TrackName = "SamSmith";
	songs[2].playTime = 1.50f;
	songs[3].TrackName = "2CHAINZ";
	songs[3].playTime = 7.70f;
	songs[4].TrackName = "HapyyBirthday";
	songs[4].playTime = 1.20f;
	songs[5].TrackName = "HapyyBirthday";
	songs[5].playTime = 1.20f;
	songs[6].TrackName = "HapyyBirthday";
	songs[6].playTime = 1.20f;
	
	Playlist iPod = { "AWesome", songs, 7 };


	printPLaylist(iPod);

	std::cout << "SHUFFLED" << std::endl;
	shufflePlaylist(iPod);
	printPLaylist(iPod);
	DedupePlaylist(iPod);
	printPLaylist(iPod);
	while (true) {};
}