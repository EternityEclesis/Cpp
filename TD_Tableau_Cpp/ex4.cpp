// ConsoleApplication19.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int reste;
	int nbdix;
	int div;
	int ncase;
	int chaine[ncase];
	ncase = 0;

	cout << "Saisissez un nombre en base 10 à convertir en base 2" << endl;
	cin >> nbdix;
	do
	{
		div = nbdix / 2;
		reste = nbdix % 2;
		chaine[ncase] = reste;
		ncase = ncase++;

	} while (div != 1);

	return 0;
}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage
