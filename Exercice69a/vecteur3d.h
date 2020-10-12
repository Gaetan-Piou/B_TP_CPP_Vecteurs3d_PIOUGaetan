#pragma once

//Declaration de la classe Vecteur 3d
class CVecteur3d {
private:
	float mX;										//Les coordonnees X du vecteur 3d
	float mY;										//Les coordonnees Y du vecteur 3d
	float mZ;										//Les coordonnees Z du vecteur 3d

public:
	//Constructeurs
	CVecteur3d();									//Constructeur initialisant toutes les coordonnees a 0
	CVecteur3d(float nX, float nY, float nZ);		//Constructeur initialisant les coordonnees selon les valeurs en parametres

	void afficheVecteur3d();						//Fonction affichant les coordonnees du vecteur 3d

	//Acesseurs
	float getX();
	float getY();
	float getZ();

	//Mutateurs
	void setX(float nX);
	void setY(float nY);
	void setZ(float nZ);
};