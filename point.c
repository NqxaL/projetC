

#include "point.h"
#include <stdlib.h>
#include <stdio.h>

Point* create_point(int px, int py) {
    Point *p = (Point *) malloc(sizeof(Point));
    p-> pos_x = px;
    p-> pos_y = py;
    return p;
}

void delete_point(Point* point) {
    free(point); //
}

void print_point(Point* p) {
    printf("POINT [p(%d, %d)]\n", p->pos_x, p->pos_y);
}