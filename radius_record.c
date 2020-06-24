#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int radius_record(Circle* circle, cur_pos* position)
{
    char *arr, *end;
    float rad;
    arr = position->pos;
    rad = strtof(arr, &end);
    if (arr - end != 0) {
        position->pos = end;
        if (rad <= 0) {
            printf("\nIncorrect radius. Radius cannot be negative\n");
            return -1;
        }
        circle->radius = rad;
        return 0;
    }
    printf("\nIncorrect radius\n");
    return -1;
}