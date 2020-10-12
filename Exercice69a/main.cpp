#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "vecteur3d.h"

int main() {
	//On cree un premier objet vecteur3d, sans passer d'argument -> les coordonnees sont toutes a 0, puis on affiche ses coordonnees
	std::cout << "Creation d'un premier vecteur 3d sans argument passe" << std::endl;
	CVecteur3d vect1;
	vect1.afficheVecteur3d();
	std::cout << std::endl;

	//On cree un second objet vecteur3d, en passant en argument les coordonnees x, y et z, puis on affiche ses coordonnees
	std::cout << "Creation d'un second vecteur 3d en passant les coordonnees en argument x=5, y=10 et z=2" << std::endl;
	CVecteur3d vect2(5, 10, 2);
	vect2.afficheVecteur3d();
	std::cout << std::endl;
	
	return 0;
}