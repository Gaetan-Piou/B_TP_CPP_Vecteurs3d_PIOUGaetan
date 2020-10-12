#pragma once

//Declaration de la classe Vecteur 3d
class CVecteur3d {
private:
	float mX;										//Les coordonnees X du vecteur 3d
	float mY;										//Les coordonnees Y du vecteur 3d
	float mZ;										//Les coordonnees Z du vecteur 3d

public:
	//Constructeur
	CVecteur3d(float nX = 0.0, float nY = 0.0, float nZ = 0.0);		//Constructeur initialisant les coordonnees selon les valeurs en parametres, et si, aucun argument n'est rentre, remplace toutes les valeurs en parametre par 0.0

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