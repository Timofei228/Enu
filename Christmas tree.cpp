// Christmas tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <windows.h>
#include <stdlib.h>

#define C4  261

#define D4  293

#define E4  329
#define F4  349

#define G4  392

#define A4  440

#define B4  493

#define C5  523

#define D5  587

#define E5  659
#define F5  698
#define G5  783

#define A5  880

#define B5  987

#define full 500
#define half full 

using namespace std;
int main()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int i, n, space, size, j, k, l;
	cout << "Enter the size of Christmas Tree: ";
	cin >> size;
	for (i = 0; i < size;i++) 
	{
		for (space = 0; space < size - i;space++) 
		{
			 printf(" ");
		}
		for (j = 0; j < i; j++) 
		{
			printf("^");
		}
		for (k = 0; k < i - 1; k++) 
		{
			printf("^");
		}
		printf("\n");
	}
	for (i = 0; i < size - 7;i++) 
	{
		for (space = 0;space < size - 2;space++) 
		{
			printf(" ");
		}
		printf("| |");
		printf("\n");
	}
	cout << "_______________________JINGLE BELLS SONG_______________________" << endl;
	
	cout << " " << endl;
	
	
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Jingle ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Bells";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 11);
	cout << "." << endl;
	

	Sleep(half);

	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "Jingle ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 13);
	cout << "Bells";
	Beep(E5, half);
	cout << "." << endl;

	Sleep(half);

	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 14);
	cout << "Jingle ";
	Beep(G5, half);
	SetConsoleTextAttribute(hConsole, 15);
	cout << "all ";
	Beep(C5, half);
	SetConsoleTextAttribute(hConsole, 1);
	cout << "the ";
	Beep(D5, half);
	SetConsoleTextAttribute(hConsole, 2);
	cout << "way";
	Beep(E5, half);
	cout << "."<<endl;

	Beep(C4, half);
	SetConsoleTextAttribute(hConsole, 3);
	cout << "Oh, ";
	Beep(D4, half);
	SetConsoleTextAttribute(hConsole, 4);
	cout << "what ";
	Beep(E4, half);
	SetConsoleTextAttribute(hConsole, 5);
	cout << "fun ";

	Beep(F5, half);
	SetConsoleTextAttribute(hConsole, 6);
	cout << "it's ";
	Beep(F5, half);
	SetConsoleTextAttribute(hConsole, 7);
	cout << "to ";
	Beep(F5, half);
	SetConsoleTextAttribute(hConsole, 8);
	cout << "ride." << endl;

	Sleep(half);

	Beep(F5, half);
	SetConsoleTextAttribute(hConsole, 41);
	cout << "In ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 42);
	cout << "a ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 43);
	cout << "one ";

	Sleep(half);

	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 47);
	cout << "horse ";
	Beep(D5, half);
	SetConsoleTextAttribute(hConsole, 52);
	cout << "open ";
	Beep(D5, half);
	SetConsoleTextAttribute(hConsole, 96);
	cout << "sleigh, ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 115);
	cout << "yeah";
	Beep(D5, half);
	cout << "."<<endl;

	Sleep(half);

	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 9);
	cout << "Happy ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 12);
	cout << "New ";
	Beep(E5, half);
	SetConsoleTextAttribute(hConsole, 10);
	cout << "Year";

	Beep(G5, half);
	cout << "!" << endl;
	

	Sleep(half);

	Sleep(full);

     
}

