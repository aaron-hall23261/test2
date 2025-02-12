#include "disk.h"
#include <cmath>

Disk::Disk(double x, double y, double r){
    this->x = x;
    this->y = y;
    this->radius = r;
}

void Disk::move(double dx, double dy){
    this->x += dx;
    this->y += dy;
}

double Disk::distance(Disk& other){

    double d = sqrt(pow(this->x - other.x, 2) + pow(this->y - other.y, 2)) - this->radius - other.radius;

    return d;

}