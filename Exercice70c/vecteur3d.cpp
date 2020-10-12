#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "vecteur3d.h"



CVecteur3d::CVecteur3d(float nX, float nY, float nZ) : mX(nX), mY(nY), mZ(nZ) {
	//BUT: Creer un objet de classe CVecteur3d et initialiser ses coordonnees selon les arguments de la fonction, ou a 0 si aucun argument n'est passe, le tout en une seule ligne
	//ENTREE:
	//	-nX: La coordonnee X qui va servir a initialiser l'objet de classe CVecteur3d
	//	-nY: La coordonnee Y qui va servir a initialiser l'objet de classe CVecteur3d
	//	-nZ: La coordonnee Z qui va servir a initialiser l'objet de classe CVecteur3d
	//SORTIE: L'objet de classe CVecteur3d avec ses coordonnes initialisees selon les arguments de la fonction

}



void CVecteur3d::afficheVecteur3d() {
	//BUT: Afficher les coordonnees X, Y et Z du vecteur 3d
	//ENTREE: Aucune
	//SORTIE: Les coordonnees X, Y et Z affichees dans la console

	std::cout << "X: " << this->getX() << std::endl;
	std::cout << "Y: " << this->getY() << std::endl;
	std::cout << "Z: " << this->getZ() << std::endl;
}



bool CVecteur3d::coincideVecteur3d(CVecteur3d& vect) {
	//BUT: Verifier si le vecteur a les memes composantes qu'un autre vecteur
	//ENTREE: Un autre vecteur
	//SORTIE:
	//	- true: si les deux vecteurs ont les memes composantes
	//	- false: si les deux vecteurs n'ont pas les memes composantes

	bool verif;

	if (this->getX() == vect.getX() && this->getY() == vect.getY() && this->getZ() == vect.getZ()) {
		verif = true;
	} else {
		verif = false;
	}

	return verif;
}



float CVecteur3d::getX() {
	//BUT: Recuperer les coordonnees X du vecteur
	//ENTREE: Aucune
	//SORTIE: Les coordonnees X du vecteur

	return this->mX;
}


float CVecteur3d::getY() {
	//BUT: Recuperer les coordonnees Y du vecteur
	//ENTREE: Aucune
	//SORTIE: Les coordonnees Y du vecteur

	return this->mY;
}


float CVecteur3d::getZ() {
	//BUT: Recuperer les coordonnees Z du vecteur
	//ENTREE: Aucune
	//SORTIE: Les coordonnees Z du vecteur

	return this->mZ;
}



void CVecteur3d::setX(float nX) {
	//BUT: Modifier les coordonnees X du vecteur selon la valeur en parametre
	//ENTREE: La nouvelle coordonnee X du vecteur
	//SORTIE: Aucune

	this->mX = nX;
}


void CVecteur3d::setY(float nY) {
	//BUT: Modifier les coordonnees Y du vecteur selon la valeur en parametre
	//ENTREE: La nouvelle coordonnee Y du vecteur
	//SORTIE: Aucune

	this->mY = nY;
}


void CVecteur3d::setZ(float nZ) {
	//BUT: Modifier les coordonnees Z du vecteur selon la valeur en parametre
	//ENTREE: La nouvelle coordonnee Z du vecteur
	//SORTIE: Aucune

	this->mZ = nZ;
}