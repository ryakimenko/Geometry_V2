#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float sidelength_calculation(Point* a, Point* b)
{
    return sqrt((a->x - b->x) * (a->x - b->x) + (a->y - b->y) * (a->y - b->y));
}

void triangle_perimetr(Triangle* triangle)
{
    triangle->perimetr = sidelength_calculation(&triangle->p1, &triangle->p2)
            + sidelength_calculation(&triangle->p2, &triangle->p3)
            + sidelength_calculation(&triangle->p1, &triangle->p3);
}
