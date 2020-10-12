#pragma once
#pragma once

class CVecteur3d {
private:
	float mX;													//Les coordonnees X du vecteur 3d
	float mY;													//Les coordonnees Y du vecteur 3d
	float mZ;													//Les coordonnees Z du vecteur 3d

public:
	//Constructeur
	CVecteur3d(float nX = 0, float nY = 0, float nZ = 0);

	void afficheVecteur3d();									//Fonction affichant les coordonnees du vecteur 3d
	CVecteur3d sommeVecteurs(CVecteur3d vect);					//Fonction calculant la somme de deux vecteurs
	float scalaireVecteurs(CVecteur3d vect);					//Fonction calculant le produit scalaire de deux vecteurs

	//Acesseurs
	float getX();
	float getY();
	float getZ();

	//Mutateurs
	void setX(float nX);
	void setY(float nY);
	void setZ(float nZ);
};