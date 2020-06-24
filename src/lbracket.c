#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int lbracket(cur_pos* position)
{
    char* arr = position->pos;
    int num, i = position->pos - arr;
    num = *arr;
    while (num != '(') {
        if (num == '\n') {
            printf("\nSymbol - '(' not found\n");
            return -1;
        } else if (num != ' ') {
            printf("\nInvalid figure name\n");
            return -1;
        }
        i++;
        num = arr[i];
    }
    position->pos = position->pos + i;
    return 0;
}