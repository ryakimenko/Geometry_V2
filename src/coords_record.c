#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int coords_record(Point* p, cur_pos* position)
{
    char *curr, *end, *arr;
    arr = position->pos;
    long int coordinate;
    curr = arr + 1;
    coordinate = strtol(curr, &end, 10);
    if (curr - end != 0) {
        p->x = coordinate;
        curr = end;
        coordinate = strtol(curr, &end, 10);
        if (curr - end != 0) {
            p->y = coordinate;
            position->pos = end;
            return 0;
        }
    }
    printf("\nIncorrect coordinates\n");
    return -1;
}