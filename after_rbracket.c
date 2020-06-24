#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int after_rbracket(cur_pos* position)
{
    char* arr = position->pos;
    int num, i = position->pos - arr;
    num = *arr;
    while (num != '\n') {
        if (num != ' ') {
            printf("\nInvalid symbol after ')'\n");
            return -1;
        }
        i++;
        num = arr[i];
    }
    position->pos = position->pos + i;
    return 0;
}