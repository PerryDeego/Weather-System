#ifndef COORDINATES_H
#define  COORDINATES_H

#include <iostream>

class Coordinates {
private:
	float x;
	float y;

public:
	~Coordinates();
	Coordinates();
	Coordinates(float, float);
	Coordinates(const Coordinates & loc);

	void setX(float);
	void setY(float);
	float getX() const;
	float getY() const;
	void display() const;
};
#endif
