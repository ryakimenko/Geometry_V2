#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int comma_find(cur_pos* position)
{
    char* arr = position->pos;
    int num, i = position->pos - arr;
    num = *arr;
    while (num != ',') {
        if (num == '\n') {
            printf("\nSymbol - ',' not found\n");
            return -1;
        } else if (num != ' ') {
            printf("\nInvalid symbol before ','\n");
            return -1;
        }
        i++;
        num = arr[i];
    }
    position->pos = position->pos + 1 + i;
    return 0;
}