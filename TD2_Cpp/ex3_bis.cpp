#include <iostream>
using namespace std;

int main()
{

	// Nombre de lignes sur le rectangle.
	for(int numberOfLine = 0; numberOfLine < 10; numberOfLine++)
	{
		// Afficher les étoiles ou les espaces sur une ligne.
		for(int star = 0; star < 7; star++)
		{
			// Entre les lignes 1 et 9 on veut des espaces, et seulement entre la première étoile et la 7ème.
			bool StarOrSpace = (numberOfLine > 0 && numberOfLine < 10-1) && (star > 0 && star < 7-1);

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
