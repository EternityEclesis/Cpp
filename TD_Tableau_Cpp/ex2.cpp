// ConsoleApplication17.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	float note[10];
	for (int compteur = 0; compteur <= 10; compteur+=1)
	{
		cout << "Saisissez une note" << endl;
		cin >> note[compteur];
	}
	for (int numCase = 0; numCase <= 10; numCase += 1)
	{
		cout << note[numCase] << " ";
		
	}
	return 0;
}
