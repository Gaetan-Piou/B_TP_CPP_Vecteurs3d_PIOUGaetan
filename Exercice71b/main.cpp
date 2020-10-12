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

	//On cree un troisieme objet vecteur3d, en passant en argument les coordonnees x, y et z, puis on affiche ses coordonnees
	std::cout << "Creation d'un troisieme vecteur 3d en passant les coordonnees en argument x=9, y=9 et z=0" << std::endl;
	CVecteur3d vect3(9, 9, 0);
	vect3.afficheVecteur3d();
	std::cout << std::endl;


	//On determine quel est le vecteur ayant la plus grande norme entre le second et le troisieme vecteur
	CVecteur3d* vectNormax = vect2.normaxVecteur(vect3);
	if (vectNormax->getX() == vect2.getX() && vectNormax->getY() == vect2.getY() && vectNormax->getZ() == vect2.getZ()) {
		std::cout << "Le second vecteur a une plus grande norme que le troisieme vecteur" << std::endl;
	} else {
		std::cout << "Le troisieme vecteur a une plus grande norme que le second vecteur" << std::endl;
	}

	return 0;
}