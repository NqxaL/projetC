#include "polygone.h"
#include <stdlib.h>
#include <stdio.h>

Polygon *create_polygon(int n){
    Polygon *polygon = (Polygon*) malloc(sizeof (Polygon));
    polygon->n=n;
    polygon->points = (Point**)malloc(n*sizeof(Point*));
    for (int i=0;i<n;i++){
        polygon->points[i] = create_point(i,n);
    }


}

void delete_polygon(Polygon * polygon){
    free(polygon);
}

void print_polygon(Polygon * polygon){
    printf("Polygon with %d points \n ", polygon->n);
    for (int i=0; i< polygon->n; i++){
        printf("Point %d:", i+1);
        print_point(polygon->points[i]);
    }


}
