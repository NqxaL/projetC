//
// Created by lggte on 20/04/2023.
//

#ifndef UNTITLED5_RECTANGLE_H
#define UNTITLED5_RECTANGLE_H
#include "point.h"
#endif //UNTITLED5_RECTANGLE_H

typedef struct Rectangle {
    Point* corner;
    int width;
    int height;

}Rectangle;

Rectangle *create_rectangle(Point * point, int width, int height);
void delete_rectangle(Rectangle * rectangle);
void print_rectangle(Rectangle * rectangle);
