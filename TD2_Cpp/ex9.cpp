#include <iostream>
using namespace std;

int main()
{
	int numberToMultiply = 0;
	cout << "Entrez le nomber à multiplier" << endl;

	cin >> numberToMultiply;

	// Affichier la première colonne des tables de multiplication.
	for(int multiWith = 0; multiWith <= 10; multiWith++)
	{
		cout << multiWith;
		cout << "	";
	}

	cout << endl;
	
	// Afficher ensuite la multiplication.
	for(int multiWith = 0; multiWith <= 10; multiWith++)
	{
		cout << multiWith * numberToMultiply;
		cout << "	 ";
	}

	cout << endl;

}
