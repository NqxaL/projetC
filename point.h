//
// Created by lggte on 20/04/2023.
//

#ifndef UNTITLED5_POINT_H
#define UNTITLED5_POINT_H

#endif //UNTITLED5_POINT_H

typedef struct {
    int pos_x;
    int pos_y;
}Point;


Point *create_point(int px, int py);
void delete_point(Point * point);
void print_point(Point * p);
