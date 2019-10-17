
#include <iostream>
#include <cmath>

using namespace std;

//Exemple de programme en C ++



int main()
{
	printf("Hello world!\n");

	//Variables ou constantes locales
	int i = 0;
	float x = 0.0;
	float racx = 0.0;
	//Constante
	const int NFOIS = 5;

	printf("Bonjour\n");


	//cout envoie une informatoin typé dans la console
	cout << "Je vais vous calculer" << NFOIS << "racines carrees\n";

	for (i = 0; i < NFOIS; i++) {

		cout << "Donnez un nombre : ";
		//cin permet de saisir une information
		cin >> x;


		if (x < 0.0)

			cout << "Le nombre" << x << "ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x);
			cout << "Le nombre" << x << "a pour racine carree" << racx << endl;
		}
	}

	cout << "Travail Termine" << endl;


	return 0;
}