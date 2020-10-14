#pragma once

class CPoint {
private:
	int mX;
	int mY;

public:
	//Constructeur
	CPoint(int abs = 0, int ord = 0);

	//Fonction d'affichage
	friend void affichePoint(CPoint& point);

	//Acesseurs
	int getX();
	int getY();

	//Mutateurs
	void setX(int nX);
	void setY(int nY);
};