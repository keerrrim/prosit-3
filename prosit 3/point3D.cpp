#include "point3D.h"
#include <cmath>
#include<iostream>

point3D::point3D(double x, double y, double z) : x(x), y(y), z(z) {}

double point3D::distance(point3D other)
{
	return std::sqrt((this->x - other.x) * (this->x - other.x) + (this->y - other.y) * (this->y - other.y)+ (this->z - other.z) * (this->z - other.z)));
}

void point3D::move(double x, double y, double z)
{
	this->x += x;
	this->y += y;
	this->z += z;
}

void point3D::affichercoordo()
{
}


