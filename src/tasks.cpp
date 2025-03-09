#include "circle.h"
#include "tasks.h"

double EarthAndRope() {
    Circle earth;
    earth.setRadius(6378100.0);
    double initialFerence = earth.getFerence();
    earth.setFerence(initialFerence + 1.0);

    double gap = earth.getRadius() - 6378100.0;
    return gap;
}

double Pool() {
    Circle pool;
    pool.setRadius(3.0);
    double poolArea = pool.getArea();

    Circle outer;
    outer.setRadius(4.0);
    double outerArea = outer.getArea();
    double outerFerence = outer.getFerence();

    double walkwayCost = (outerArea - poolArea) * 1000.0;
    double fenceCost = outerFerence * 2000.0;
    double finalCost = walkwayCost + fenceCost;

    return finalCost;
}
