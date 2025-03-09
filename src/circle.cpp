// Copyright 2022 UNN-CS
#include "circle.h"

#include <cmath>

void Circle::setRadius(double r) {
	if (r >= 0) {
		radius = r;
		ference = 2 * PI * radius;
		area = PI * radius * radius;
	}
}

void Circle::setFerence(double f) {
	if (f >= 0) {
		ference = f;
		radius = ference / (2 * PI);
		area = PI * radius * radius;
	}
}

void Circle::setArea(double a) {
	if (a >= 0) {
		area = a;
		radius = sqrt(area / PI);
		ference = 2 * PI * radius;
	}
}

double Circle::getRadius() {
	return radius;
}

double Circle::getFerence() {
	return ference;
}

double Circle::getArea() {
	return area;
}