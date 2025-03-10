// Copyright 2025

#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>

const double PI = 3.14159265358979323846264;

class Circle {
 private:
    double radius;
    double ference;
    double area;

 public:
    explicit Circle(double r);
    void setRadius(double r);
    void setFerence(double f);
    void setArea(double a);

    double getRadius();
    double getFerence();
    double getArea();
};

#endif  // INCLUDE_CIRCLE_H_
