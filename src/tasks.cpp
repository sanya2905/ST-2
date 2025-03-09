// Copyright 2025
#include "circle.h"
#include "tasks.h"

double EarthAndRope(double earthRadius, double addedLength) {
    Circle earth(earthRadius*1000);

    double initialFerence = earth.getFerence();
    earth.setFerence(initialFerence + addedLength);

    double gap = earth.getRadius() - (earthRadius * 1000);
    return gap;
}

double Pool(double poolRadius, double roadWidth,
    double concreteCost, double fenceCost) {

    Circle pool(poolRadius);
    double poolArea = pool.getArea();

    Circle outer(poolRadius + roadWidth);
    double outerArea = outer.getArea();
    double outerFerence = outer.getFerence();

    double finalRoadCost = (outerArea - poolArea) * concreteCost;
    double finalFenceCost = outerFerence * fenceCost;
    double finalCost = finalRoadCost + finalFenceCost;

    return finalCost;
}
