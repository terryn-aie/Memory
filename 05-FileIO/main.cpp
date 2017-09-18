#include <iostream>
#include <fstream>
#include <string>
#include "entity.h"

using std::string;

using std::fstream;		// :D - select what we know we'll use!

using namespace std;	// D: - USE EVERYTHING.

// My Information
void main2()
{
	std::string inputBuffer;

	std::cout << "Where would you like to save this?" << std::endl;
	std::cin >> inputBuffer;

	std::fstream profileData;
	profileData.open(inputBuffer.c_str(), std::ios_base::out);

	if (profileData.fail())
	{
		std::cout << "Sorry, doesn't seem like we can save there. :(" << std::endl;
		return;
	}

	
	cin.ignore(1000, '\n');
	std::cout << "Who are you?" << std::endl;
	getline(std::cin, inputBuffer);
	profileData << inputBuffer << std::endl;

	//cin.ignore(1000, '\n');
	std::cout << "How old are you?" << std::endl;
	getline(std::cin, inputBuffer);
	profileData << inputBuffer << std::endl;

	//cin.ignore(1000, '\n');
	std::cout << "What's your favorite color?" << std::endl;
	getline(std::cin, inputBuffer);
	profileData << inputBuffer << std::endl;

	profileData.flush();
	profileData.close();

	std::cout << "THANKS YA DID IT!" << std::endl;
}

int main()
{
	fstream file;

	file.open("text.txt");

	if (file.fail())
	{
		std::cout << "File not found. :(" << std::endl;
		return -1;
	}

	// Reading from a File
	string buffer;
	while (std::getline(file, buffer))
	{
		// print the line!
		std::cout << buffer << std::endl;
	}

	file.clear();	// reset the error flags

	file.seekp(0, std::ios_base::end);	// move my cursor to the end

	// Writing to a File
	// write a message! :D
	file << std::endl << "Today is always the present! :)";

	file.flush();
	file.close();

	// let's make another thingie

	fstream autoCreate;

	autoCreate.open("createme.txt", std::ios::out | std::ios::in);

	if (autoCreate.fail())
	{
		std::cout << "Something went wrong." << std::endl;
		return -1;
	}

	autoCreate.close();
	
	// Closed
	// 1. Digital Printer
	//std::cout << "\n" << std::endl;
	//std::cout << "DIGITAL--PRINTER" << std::endl;
	//std::cout << "\n" << std::endl;
	//while (true)
	//{
	//	std::cout << "What file would you like to open?" << std::endl;
	//	std::string inputBuffer;

	//	std::cin >> inputBuffer;
	//	fstream printer;

	//	printer.open(inputBuffer);
	//	if (printer.fail())
	//	{
	//		std::cout << "The file you have requested could not be found." << std::endl;
	//		continue;
	//	}

	//	std::string fileContents;
	//	while (std::getline(printer, fileContents))
	//	{
	//		std::cout << fileContents << std::endl;
	//	}

	//	file.close();
	//}

	//main2();

	fstream entityStream;
	entityStream.open("monsters.txt");

	if (entityStream.fail())
	{
		std::cout << "CAN'T OPEN FILE" << std::endl;
	}

	int entityCount = 0;
	Entity entities[100];

	while (true)
	{
		std::string buf;
		bool entityFound = false;

		// seek to the next entity
		while (getline(entityStream, buf))
		{
			if (buf[0] == '@')
			{
				entityFound = true;
				break;
			}
		}

		// exit if no entity found
		if (!entityFound) { break; }

		// load data into the array of entities
		Entity& curEntity = entities[entityCount];

		getline(entityStream, buf);
		curEntity.hitpoints = stof(buf);
		getline(entityStream, buf);
		curEntity.armor = stof(buf);
		getline(entityStream, buf);
		curEntity.strength = stof(buf);
		getline(entityStream, buf);
		curEntity.defense = stof(buf);
		getline(entityStream, buf);
		curEntity.agility = stof(buf);
		getline(entityStream, buf);
		curEntity.luck = stof(buf);

		entityCount++;

		// exit if no entity found
		if (entityCount >= 100) { break; }
	}

	while (true) {}	// keep the program going
}