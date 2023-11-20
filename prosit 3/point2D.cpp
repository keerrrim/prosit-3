#include "point2D.h"
#include <cmath>
#include<iostream>

point2D::point2D(double x, double y) : x(x), y(y) {}

double point2D::distance(point2D other) {
    return std::sqrt((this->x - other.x) * (this->x - other.x) + (this->y - other.y) * (this->y - other.y));
}

void point2D::move(double x, double y) {
    this->x += x;
    this->y += y;
}

void point2D::affichercoordo()
{
}


