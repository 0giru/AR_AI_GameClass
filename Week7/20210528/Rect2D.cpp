#include"Rect2D.h"
#include<iostream>

void Rect2D::set(double x, double y, double w, double h) {
	cx = x;
	cy = y;
	width = w;
	height = h;
}

Rect2D::Rect2D() {
	//default Constructor
	set(0, 0, 1, 1);
}

Rect2D::Rect2D(double x, double y, double w, double h) {
	//custom Constructor
	set(x, y, w, h);
}

Rect2D::~Rect2D() {
	std::cout << "\nDestroyer Called";
}

double Rect2D::getX() const {
	return cx;
}

double Rect2D::getY() const {
	return cy;
}

double Rect2D::getHeight() const {
	return height;
}

double Rect2D::getWidth() const {
	return width;
}

double Rect2D::getArea() const {
	return getHeight() * getWidth();
}
double Rect2D::getPerimeter() const {
	return 2 * (getHeight() + getWidth());
}
bool Rect2D::contains(double x, double y) const {
	if (x < getWidth() / 2 + getX() && x > getX() - getWidth() / 2) {
		if (y < getHeight() / 2 + getY() && y > getY() - getHeight() / 2) {
			return true;
		}
	}
	return false;
}
bool Rect2D::contains(const Rect2D &rect) const {
	if (rect.getWidth() / 2 + rect.getX() < getWidth() / 2 + getX() && rect.getX() - rect.getWidth() / 2 > getX() - getWidth() / 2) {
		if (rect.getHeight() / 2 + rect.getY() < getHeight() / 2 + getY() && rect.getY() - rect.getHeight() / 2 > getY() - getHeight() / 2) {
			return true;
		}
	}
	return false;
}

bool Rect2D::overlaps(const Rect2D &rect) const {
	double distX = abs(getX() - rect.getX());
	double distY = abs(getY() - rect.getY());
	if (getX() == rect.getX() && getY() == rect.getY()) {
		return true;
	}
	if (getWidth() / 2 + rect.getWidth() / 2 > distX) {
		if (getHeight() / 2 + rect.getHeight() / 2 > distY) {
			return true;
		}
	}
	return false;
}