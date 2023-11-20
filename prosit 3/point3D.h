#pragma once
#include"point2D.h"

class point3D : public point2D {
	double z;

public:

	point3D(double x, double y, double z);

	double distance(point3D other);

	void move(double x, double y, double z);

	void affichercoordo();
};
