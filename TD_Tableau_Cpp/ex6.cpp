// ConsoleApplication23.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string tabSemaine[14];
	tabSemaine[0] = "Lundi";
	tabSemaine[1] = "Mardi";
	tabSemaine[2] = "Mercredi";
	tabSemaine[3] = "Jeudi";
	tabSemaine[4] = "Vendredi";
	tabSemaine[5] = "Samedi";
	tabSemaine[6] = "Dimanche";
	tabSemaine[7] = "Monday";
	tabSemaine[8] = "Tuesday";
	tabSemaine[9] = "Wednesday";
	tabSemaine[10] = "Thursday";
	tabSemaine[11] = "Friday";
	tabSemaine[12] = "Saturday";
	tabSemaine[13] = "Sunday";
	int nombre1;
	int nombre2;
	do
	{
		cout << "Entrez un nombre entre 1 et 7 pour choisir le jour de la semaine" << endl;
		cin >> nombre1;
	} while (nombre2 > 7 || nombre2 < 1);
	cout << "En Francais cela donne : " << tabSemaine[nombre1] << " et en anglais  " << tabSemaine[nombre1+6] << endl;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
