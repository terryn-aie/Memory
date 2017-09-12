// ../mixtape.h
#include <string>
#include <iostream>
#include <random>
#include <ctime>
struct Track
{
	std::string trackName; // name of track
	float playtime;        // track runtime
	
};

struct Playlist
{
	std::string playlistName; // name of playlist
	Track * trackList;        // pointer to array of tracks
	int trackCount;           // number of tracks
};

void printPlaylist(const Playlist& pl)
{
	std::cout << pl.playlistName << std::endl;

	for (int i = 0; i < pl.trackCount; i++)
	{
		if (pl.trackList[i].trackName != "")
		{
			std::cout << pl.trackList[i].trackName << std::endl;
			std::cout << (int)pl.trackList[i].playtime << (pl.trackList[i].playtime - (int)pl.trackList[i].playtime) << std::endl;
		}
		
	}
}
void shufflePlaylist(Playlist& pl)
{
	srand(time(NULL));
	int counter = 20;
	Track temp;
	while (counter > 0)
	{
		int bogo = rand() % (pl.trackCount - 1);

		temp = pl.trackList[bogo];

		pl.trackList[bogo] = pl.trackList[bogo + 1];
		pl.trackList[bogo + 1] = temp;

		counter--;
	}


}
void dedupePlaylist(Playlist& pl)
{
	for (int i = 0; i < pl.trackCount; i++)
	{
		
			for (int j = i + 1; j < pl.trackCount; j++)
			{
				if (pl.trackList[i].trackName == pl.trackList[j].trackName)
				{
					pl.trackList[i].trackName = "";
				}
			}
		
	}
}



void main()
{
	Track songs[4];
	songs[0].trackName = "sng";
	songs[0].playtime = 3.5f;
	songs[1].trackName = "tur";
	songs[1].playtime = 3.5f;
	songs[2].trackName = "bud";
	songs[2].playtime = 3.5f;
	songs[3].trackName = "tur";
	songs[3].playtime = 3.5f;
	Playlist dope = { "dope", songs, 4 };
	dedupePlaylist(dope);
	printPlaylist(dope);
	/*shufflePlaylist(dope);
	printPlaylist(dope);*/


	while (true) {};
}