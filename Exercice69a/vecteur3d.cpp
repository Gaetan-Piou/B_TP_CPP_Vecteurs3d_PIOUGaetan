#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "vecteur3d.h"



CVecteur3d::CVecteur3d() {
//BUT: Creer un objet de classe CVecteur3d et initialiser toutes ses coordonnees a 0
//ENTREE: Aucune
//SORTIE: L'objet de classe CVecteur3d avec toutes ses coordonnees initialisees a 0

	this->setX(0.0);
	this->setY(0.0);
	this->setZ(0.0);
}


CVecteur3d::CVecteur3d(float nX, float nY, float nZ) {
//BUT: Creer un objet de classe CVecteur3d et initialiser ses coordonnees selon les arguments de la fonction
//ENTREE:
//	-nX: La coordonnee X qui va servir a initialiser l'objet de classe CVecteur3d
//	-nY: La coordonnee Y qui va servir a initialiser l'objet de classe CVecteur3d
//	-nZ: La coordonnee Z qui va servir a initialiser l'objet de classe CVecteur3d
//SORTIE: L'objet de classe CVecteur3d avec ses coordonnes initialisees selon les arguments de la fonction

	this->setX(nX);
	this->setY(nY);
	this->setZ(nZ);
}



void CVecteur3d::afficheVecteur3d() {
//BUT: Afficher les coordonnees X, Y et Z du vecteur 3d
//ENTREE: Aucune
//SORTIE: Les coordonnees X, Y et Z affichees dans la console

	std::cout << "X: " << this->getX() << std::endl;
	std::cout << "Y: " << this->getY() << std::endl;
	std::cout << "Z: " << this->getZ() << std::endl;
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