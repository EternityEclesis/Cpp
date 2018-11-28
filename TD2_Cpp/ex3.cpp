#include <iostream>
using namespace std;

int main()
{
	// Nombre de lignes sur le rectangle.
	for(int numberOfLine = 0; numberOfLine < 10; numberOfLine++)
	{
		// Afficher les étoiles sur une ligne.
		for(int star = 0; star < 7; star++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;
}
