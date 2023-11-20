#pragma once

class point2D {
	double x, y;

public:
	
	point2D(double x, double y);
	
	double distance(point2D other);
	
	void move(double x, double y);
	
	virtual void move(double x, double y, double z)=0;

	void affichercoordo();
};
