#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

void complete_circle_check(cur_pos* position, Circle* circle)
{
    int flag = lbracket(position);
    if (flag == -1)
        return;
    flag = coords_record(&circle->centre, position);
    if (flag == -1)
        return;
    flag = comma_find(position);
    if (flag == -1)
        return;
    flag = radius_record(circle, position);
    if (flag == -1)
        return;
    flag = rbracket(position);
    if (flag == -1)
        return;
    flag = after_rbracket(position);
    if (flag == -1)
        return;
    circle_area(circle);
    circle_perimetr(circle);
}