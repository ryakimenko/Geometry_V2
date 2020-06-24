#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void circle_perimetr(Circle* circle)
{
    circle->perimetr = 2 * 3.14 * circle->radius;
}