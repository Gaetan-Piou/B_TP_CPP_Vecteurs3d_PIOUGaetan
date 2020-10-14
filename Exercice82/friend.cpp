#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "vecteur3d.h"



bool coincideVecteur3d(CVecteur3d& vect1, CVecteur3d& vect2) {
	//BUT: Verifier si le vecteur a les memes composantes qu'un autre vecteur
	//ENTREE: Un autre vecteur
	//SORTIE:
	//	- true: si les deux vecteurs ont les memes composantes
	//	- false: si les deux vecteurs n'ont pas les memes composantes

	bool verif;

	if (vect1.mX == vect2.mX && vect1.mY == vect2.mY && vect1.mZ == vect2.mZ) {
		verif = true;
	}
	else {
		verif = false;
	}

	return verif;
}