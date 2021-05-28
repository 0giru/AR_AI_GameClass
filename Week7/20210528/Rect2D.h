#pragma once
class Rect2D {
private:
	double cx;
	double cy;
	double width;
	double height;
	void set(double x, double y, double width, double height);
public:
	Rect2D(); //default Constructor
	Rect2D(double x, double y, double w, double h); //custom Constructor
	~Rect2D();
	double getX() const;
	double getY() const;
	double getHeight() const;
	double getWidth() const;
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Rect2D &circle) const;
	bool overlaps(const Rect2D &circle) const;
};