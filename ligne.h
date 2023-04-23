//
// Created by lggte on 20/04/2023.
//

#ifndef UNTITLED5_LIGNE_H
#define UNTITLED5_LIGNE_H
#include "point.h"
#endif //UNTITLED5_LIGNE_H



typedef struct line {
    Point *p1;
    Point *p2;
}Line;


Line *create_line(Point * p1, Point * p2);
void delete_line(Line * line);
void print_line(Line * line);