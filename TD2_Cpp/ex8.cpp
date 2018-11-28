#include <iostream>
using namespace std;

int main ()
{
	// Tant que l'utilisateur n'a pas rentré un bon nombre, on lui redemande
	// le nombre à taper.
	int base = 0;
	do
	{
		cout << "Veuillez saisir un nombre impair entre 5 et 79 pour la base du triangle isocèle" << endl;
		cin >> base;

	} while(base % 2 == 0 || (base > 79 || base < 5));

	// On rajoute une ligne pour faire la base complète du triangle.
	int numberOfLines = base / 2 + 1;

	// Pour chaque nombre de lignes on fait
	for(int numberOfLine = 0; numberOfLine < numberOfLines; numberOfLine++)
	{
		// Tout d'abord on rajoute les espaces en partant du haut, plus on va vers le bas,
		// plus le nombre d'espaces diminue, donc le nombre de lignes aussi.
		// On inverse donc l'itération.
		for(int space = 0; space < ((numberOfLines-1)-numberOfLine); space++)
		{
			cout << " ";
		}

		// On rajoute la première étoile pour faire la première bordure du triangle.
		cout << " *";

		// On rajoute ses étoiles ensuites pour faire l'autre bordure.
		// On multiplie par 2 la ligne sur laquelle on est pour rajouter 2 fois plus d'espaces et d'étoiles.
		int remainderOfStars = numberOfLine * 2;
		for(int star = 0; star < remainderOfStars; star++)
		{
			// On rajoute des espaces comme pour le carré de l'exerice 3.
			// Sauf que cette fois ci, le nombre d'étoiles évolue en fonction des lignes.
			bool StarOrSpace = (numberOfLine > 0 && numberOfLine < numberOfLines-1) 
								&& (star < remainderOfStars-1);

			if(StarOrSpace)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}

		// Fin de ligne.
		cout << endl;
	}

	// Nombre de lignes sur le rectangle.
	for(int numberOfLine = 0; numberOfLine < 10; numberOfLine++)
	{
		// On rajoute les espaces pour que le rectangle soit au milieu de la base.
		// numberOfLines - 3 car - 2 pour être au mileu car le rectangle fait 5 de largeur, 
		// et - 1 encore car le caractère espace prends une largeur.
		for(int space = 0; space < numberOfLines-3; space++)
		{
			cout << " ";
		}

		cout << " ";

		// Afficher les étoiles ou les espaces sur une ligne.
		for(int star = 0; star < 5; star++)
		{
			// Entre les lignes 2 et 9 on veut des espaces, et seulement entre la première étoile et la 5ème.
			bool StarOrSpace = (numberOfLine >= 0 && numberOfLine < 10-1) && (star > 0 && star < 5-1);

			if(StarOrSpace)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}

		cout << endl;
	}

	return 0;
}
