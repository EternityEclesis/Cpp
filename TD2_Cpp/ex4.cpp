#include <iostream>
using namespace std;

int main()
{
	// On veut 8 lignes sur le trinngle.
	for(int numberOfLine = 0; numberOfLine < 8; numberOfLine++)
	{
		// A chaque fois qu'on descent en bas du triangle, le nombre d'étoiles augmentent.
		// Donc à chaque ligne, on rajoute une étoile.
		for(int star = 0; star < numberOfLine+1; star++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
