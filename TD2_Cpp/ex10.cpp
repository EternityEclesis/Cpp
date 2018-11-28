#include <iostream>
using namespace std;

#define MOT(x) #x
#define ENMOT(x) MOT(x)

#define ROUGE 1 << 0
#define VERT 1 << 1
#define BLEU 1 << 2
#define ORANGE 1 << 3
#define MAGENTA 1 << 4
#define CYAN 1 << 5
#define NOIR 1 << 6
#define BLANC 1 << 7
#define JAUNE 1 << 8
#define PASCOULEUR 1 << 31

int obtenircouleur(string couleur)
{
	if(couleur == ENMOT(ROUGE))
	{
		return ROUGE;
	}
	else if(couleur == ENMOT(VERT))
	{
		return VERT;
	}
	else if(couleur == ENMOT(BLEU))
	{

	}
	
	return PASCOULEUR;
}

int main()
{
	return 0;
	
}
