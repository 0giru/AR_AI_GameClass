#pragma once
class Circle2D {
private:
	double cx;
	double cy;
	double radius;
public:
	Circle2D(); //default Constructor
	Circle2D(double x, double y, double r); //custom Constructor
	~Circle2D();
	double getX() const;
	double getY() const;
	double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Circle2D &circle) const;
	bool overlaps(const Circle2D &circle) const;
};