#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void triangle_area(Triangle* triangle)
{
    triangle->area
            = sqrt((triangle->perimetr / 2)
                   * ((triangle->perimetr / 2)
                      - sidelength_calculation(&triangle->p1, &triangle->p2))
                   * ((triangle->perimetr / 2)
                      - sidelength_calculation(&triangle->p2, &triangle->p3))
                   * ((triangle->perimetr / 2)
                      - sidelength_calculation(&triangle->p1, &triangle->p3)));
}