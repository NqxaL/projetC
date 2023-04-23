

#ifndef UNTITLED5_CERCLE_H
#define UNTITLED5_CERCLE_H
#include "point.h"
#endif //UNTITLED5_CERCLE_H


typedef struct  {
    int radius;
    Point* centre;
}Circle;


Circle *create_circle(Point * center, int radius);
void delete_circle(Circle * circle);
void print_circle(Circle * circle);
