cmake_minimum_required(VERSION 3.24)
project(untitled5 C)

set(CMAKE_C_STANDARD 11)

add_library(untitled5 shapes.c shapes.h main.c point.c carre.c ligne.c cercle.c polygone.c rectangle.h cercle.h point.h ligne.h carre.h polygone.h rectangle.c ID.c ID.h)
