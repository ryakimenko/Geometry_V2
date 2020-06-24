#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct {
    long int x;
    long int y;
} Point;

typedef struct {
    Point p1;
    Point p2;
    Point p3;
    float perimetr;
    float area;
} Triangle;

typedef struct {
    Point centre;
    float radius;
    float perimetr;
    float area;
} Circle;

typedef struct {
    char* pos;
} cur_pos;

char* equals_string(char* arr1, char* arr2, int n);
int shapecheck(char* arr, cur_pos* position);
int lbracket(cur_pos* position);
int coords_record(Point* p, cur_pos* position);
int comma_find(cur_pos* position);
int radius_record(Circle* circle, cur_pos* position);
int rbracket(cur_pos* position);
int after_rbracket(cur_pos* position);
void complete_circle_check(cur_pos* position, Circle* circle);
void circle_perimetr(Circle* circle);
void circle_area(Circle* circle);
void complete_triangle_check(Triangle* triangle, cur_pos* position);
void triangle_area(Triangle* triangle);
void triangle_perimetr(Triangle* triangle);
float sidelength_calculation(Point* a, Point* b);

#endif