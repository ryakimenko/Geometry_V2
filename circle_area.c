#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void circle_area(Circle* circle)
{
    circle->area = 3.14 * (circle->radius * circle->radius);
}