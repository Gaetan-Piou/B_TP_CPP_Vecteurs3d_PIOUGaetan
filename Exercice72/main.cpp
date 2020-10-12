#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "vecteur3d.h"


int main() {
	//On cree un premier vecteur 3d puis on affiche ses coordonnees
	CVecteur3d vect1(5, 5, 5);
	vect1.afficheVecteur3d();

	//On cree un second vecteur 3d puis on afficher ses coordonnees
	CVecteur3d vect2(10, 0, 15);
	vect2.afficheVecteur3d();

	std::cout << std::endl;

	//On calcule la somme des deux vecteurs et on l'affiche
	std::cout << "Calcul de la somme des deux vecteurs :" << std::endl;
	CVecteur3d vectSomme = vect1.sommeVecteurs(vect2);
	vectSomme.afficheVecteur3d();

	std::cout << std::endl;

	//On calcule le produit scalaire des deux vecteurs et on l'affiche
	std::cout << "Calcul du produit scalaire des deux vecteurs :" << std::endl;
	float scalaire = vect1.scalaireVecteurs(vect2);
	std::cout << scalaire << std::endl;

	return 0;
}