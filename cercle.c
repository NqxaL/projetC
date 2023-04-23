#include <stdio.h>
#include <stdlib.h>
#include "cercle.h."

Circle *create_circle(Point * centre, int radius){
    Circle *circle = (Circle *)malloc(sizeof(Circle));
    circle->centre = centre;
    circle->radius = radius;
    return circle;
}

void delete_circle(Circle * circle){
    free(circle);
}

void print_circle(Circle * circle){
    printf("CIRCLE: %d %d %d", circle->centre->pos_x, circle->centre->pos_y, circle->radius);
}