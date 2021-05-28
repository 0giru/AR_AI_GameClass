#include"Circle2D.h"
#include<iostream>
Circle2D::Circle2D() {
	cx = 0;
	cy = 0;
	radius = 1;
}

Circle2D::Circle2D(double x, double y, double r) {
	cx = x;
	cy = y;
	radius = r;
}

Circle2D::~Circle2D() {
	std::cout << "\nDestroyer Called";
}

double Circle2D::getX() const {
	return cx;
}

double Circle2D::getY() const {
	return cy;
}

double Circle2D::getRadius() const {
	return radius;
}


double Circle2D::getArea() const {
	return getRadius() * getRadius() * 3.14;
}

double Circle2D::getPerimeter() const {
	return getRadius() * 2 * 3.14;
}

bool Circle2D::contains(double x, double y) const {
	double distance = sqrt(pow(getX() - x, 2) + pow(getY() - y, 2));
	if (distance < getRadius()) {
		return true;
	}
	return false;
}
bool Circle2D::contains(const Circle2D &circle) const {
	double distance = sqrt(pow(getX() - circle.getX(), 2) + pow(getY() - circle.getY(), 2));
	if (distance + circle.getRadius() < getRadius()) {
		return true;
	}
	return false;
}
bool Circle2D::overlaps(const Circle2D &circle) const {
	double distance = sqrt(pow(getX() - circle.getX(), 2) + pow(getY() - circle.getY(), 2));
	if (getX() == circle.getX() && getY() == circle.getY()) {
		return true;
	}
	if (getRadius() + circle.getRadius() > distance) {
		return true;
	}
	return false;
}