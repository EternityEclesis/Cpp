#include <iostream>
using namespace std;

int main ()
{
	// On veut 5 lignes sur notre triangle.
	for(int numberOfLine = 0; numberOfLine < 5; numberOfLine++)
	{	
		// On rajoute le maximum d'espaces en fonction des lignes
		// en montant partant de la base du triangle.
		for(int space = 0; space < ((5-1)-numberOfLine); space++)
		{
			cout << " ";
		}

		// On rajoute une étoile juste après
		cout << "*";

		// Plus on va vers le bas, plus le nombre d'étoiles augmentent, et plus le nombre de lignes augmentent.
		// Le nombre d'étoiles sont alors proportionnels par rapport au lignes.
		for(int twostars = 0; twostars < numberOfLine; twostars++)
		{
			cout << "**";
		}

		cout << endl;
	}

	return 0;
}
