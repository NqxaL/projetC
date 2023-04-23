//
// Created by lggte on 20/04/2023.
//

#ifndef UNTITLED5_CARRE_H
#define UNTITLED5_CARRE_H
#include "point.h"

#endif //UNTITLED5_CARRE_H

typedef struct Square {
    Point* corner;
    int length;

}Square;

Square *create_square(Point * point, int length);
void delete_square(Square * square);
void print_square(Square * square);


