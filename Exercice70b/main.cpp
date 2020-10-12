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
	std::cout << "Creation d'un troisieme vecteur 3d en passant les coordonnees en argument x=5, y=10 et z=2" << std::endl;
	CVecteur3d vect3(5, 10, 2);
	vect3.afficheVecteur3d();
	std::cout << std::endl;


	//On verifie si le premier et le second objet vecteur3d ont les memes composantes et on affiche le resultat
	if (vect1.coincideVecteur3d(&vect2) == true) {
		std::cout << "Le premier et le second vecteur ont les memes composantes" << std::endl;
	} else {
		std::cout << "Le premier et le second vecteur n'ont pas les memes composantes" << std::endl;
	}
	std::cout << std::endl;

	//On verifie si le second et le troisieme objet vecteur3d ont les memes composantes et on affiche le resultat
	if (vect2.coincideVecteur3d(&vect3) == true) {
		std::cout << "Le second et le troisieme vecteur ont les memes composantes" << std::endl;
	}
	else {
		std::cout << "Le second et le troisieme vecteur n'ont pas les memes composantes" << std::endl;
	}
	std::cout << std::endl;

	return 0;
}