/* Author: D. Perry */

#include "Coordinates.h";
#include <iostream>

Coordinates::~Coordinates()
{
	//std::cout << "Deleting coordinates..." << std::endl;
}

Coordinates::Coordinates()
{
	setX(0.0f);
	setY(0.0f);
}

Coordinates::Coordinates(float x, float y)
{
	this->x = x;
	this->y = y;
}

Coordinates::Coordinates(const Coordinates & loc)
{
	this->x = loc.getX();
	this->y = loc.getY();
}

void Coordinates::setX(float longitude)
{
	x = longitude;
}

void Coordinates::setY(float latitude)
{
	y = latitude;
}

float Coordinates::getX() const
{
	return x;
}

float Coordinates::getY() const
{
	return y;
}

void Coordinates::display() const
{
	std::cout << "(" << getX() << "," << getY() << ")-->";
}