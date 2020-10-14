#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string>
#include "CPoint.h"

CPoint::CPoint(int abs, int ord) {
	this->mX = abs;
	this->mY = ord;
}

int CPoint::getX() {
	return this->mX;
}

int CPoint::getY() {
	return this->mY;
}

void CPoint::setX(int nX) {
	this->mX = nX;
}

void CPoint::setY(int nY) {
	this->mX = nY;
}