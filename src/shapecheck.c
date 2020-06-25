#include "functions.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

char* equals_string(char* arr1, char* arr2, int n)
{
    int num;
    for (int i = 0; i < n; i++) {
        num = arr1[i];
        arr1[i] = toupper(num);
        if (arr1[i] != arr2[i]) {
            return arr1;
        }
    }
    return NULL;
}

int shapecheck(char* arr, cur_pos* position)
{
    int i = 0, num, cir = 6, tri = 8;
    char *circle_eq, *triangle_eq;
    char circle[7] = "CIRCLE", triangle[9] = "TRIANGLE";
    num = arr[i];
    while (num == ' ') {
        i++;
        num = arr[i];
    }
    position->pos = arr + i;
    circle_eq = equals_string((arr + i), circle, cir);
    triangle_eq = equals_string((arr + i), triangle, tri);
    if (circle_eq == NULL) {
        position->pos += cir;
        return 1;
    } else if (triangle_eq == NULL) {
        position->pos += tri;
        return 2;
    }
    return 0;
}
