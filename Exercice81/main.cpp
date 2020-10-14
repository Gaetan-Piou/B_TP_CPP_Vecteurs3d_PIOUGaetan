#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "CPoint.h"

int main() {
	CPoint pt1(5, 10);
	int x, y;

	std::cout << "Veuillez entrer l'abscisse du nouveau point" << std::endl;
	std::cin >> x;
	std::cout << "Veuillez entrer l'ordonnee du nouveau point" << std::endl;
	std::cin >> y;

	CPoint pt2(x, y);


	affichePoint(pt1);
	affichePoint(pt2);

	return 0;
}