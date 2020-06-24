#include "functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void complete_triangle_check(Triangle* triangle, cur_pos* position)
{
    int flag = lbracket(position);
    if (flag == -1)
        return;
    flag = coords_record(&triangle->p1, position);
    if (flag == -1)
        return;
    flag = comma_find(position);
    if (flag == -1)
        return;
    flag = coords_record(&triangle->p2, position);
    if (flag == -1)
        return;
    flag = comma_find(position);
    if (flag == -1)
        return;
    flag = coords_record(&triangle->p3, position);
    if (flag == -1)
        return;
    flag = rbracket(position);
    if (flag == -1)
        return;
    flag = after_rbracket(position);
    if (flag == -1)
        return;
    triangle_perimetr(triangle);
    triangle_area(triangle);
}