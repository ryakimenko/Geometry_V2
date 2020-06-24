#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char figure[100];
    int f_name;
    Circle circle;
    Triangle triangle;
    cur_pos position;
    fgets(figure, 100, stdin);
    f_name = shapecheck(figure, &position);
    if (f_name == 0) {
        printf("Wrong shape");
        return 0;
    }
    if (f_name == 1) {
        complete_circle_check(&position, &circle);
        printf("x=%ld  y=%ld r=%f, perimetr = %f, area = %f\n",
               circle.centre.x,
               circle.centre.y,
               circle.radius,
               circle.perimetr,
               circle.area);
    }
    if (f_name == 2) {
        complete_triangle_check(&position, &circle);
        printf("perimetr = %f, area = %f\n", triangle.perimetr, triangle.area);
    }
    return 0;
}