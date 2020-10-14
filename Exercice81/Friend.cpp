#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "CPoint.h"

void affichePoint(CPoint& point) {
	//BUT: Fonction amie de la classe CPoint affichant les coordonnees d'un point
	//ENTREE: Un point
	//SORTIE: Les coordonnees du point affichees dans la console
	
	std::cout << "X: " << point.mX << std::endl << "Y: " << point.mY << std::endl;
}