// ConsoleApplication6.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string couleur1;
	string couleur2;
	do {
		cout << "Saisissez une couleur RJB en minuscule" << endl;
		getline(cin, couleur1);
		cout << "Saisissez une deuxieme couleur RJB en minuscule " << endl;
		getline(cin, couleur2);
	
	if((couleur1 == "rouge" && couleur2 == "bleu") || (couleur1 == "bleu" && couleur2 == "rouge"))
	{
		cout << " La couleur complementaire est le violet" << endl;
	}
	else if ((couleur1 == "rouge" && couleur2 == "jaune") || (couleur1 == "jaune" && couleur2 == "rouge"))
	{
		cout << " La couleur complementaire est le orange" << endl;
	}
	else if ((couleur1 == "bleu" && couleur2 == "jaune") || (couleur1 == "jaune" && couleur2 == "bleu"))
	{
		cout << "La couleur complementaire est le vert" << endl;
	}
	else if ((couleur1 != "rouge" || couleur1 != "jaune" || couleur1 != "bleu") && (couleur2 != "rouge" || couleur2 != "bleu" || couleur2 != "jaune"))
	{
		cout << "Erreur veuillez reessayer" << endl;
	}
	} while ((couleur1 != "rouge" || couleur1 != "jaune" || couleur1 != "bleu") && (couleur2 != "rouge" || couleur2 != "bleu" || couleur2 != "jaune"));
	return 0;
}