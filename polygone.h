//
// Created by lggte on 20/04/2023.
//

#ifndef UNTITLED5_POLYGONE_H
#define UNTITLED5_POLYGONE_H
#include "point.h"
#endif //UNTITLED5_POLYGONE_H

typedef struct polygon {
    int n;
    Point ** points;
}Polygon;

Polygon *create_polygon(int n);
void delete_polygon(Polygon * polygon);
void print_polygon(Polygon * polygon);
