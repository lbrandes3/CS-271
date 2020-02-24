#include <stdio.h>
#include "ArrayFunctions.h"

int main(void) {
    int num[10];
    fillInteger(num, 10, 1, 10);
    printIntArray(num, 10);

    char chars[10];
    fillCharacter(chars, 10, 'a', 'z');
    printCharArray(chars, 10);

    float floats[10];
    fillFloat(floats, 10, 0, 10);
    printFloatArray(floats, 10);

    int conNum[] = { 1, 2, 5, 4, 6, 5, 6 };
    findConsecutive(conNum, 7);

    char tripChar[] = { 'a', 'b', 'c', 'b', 'c', 'd' };
    findTriples(tripChar, 6);

    printf("%f\n", floatMean(floats, 10));
    printf("%f\n", floatMax(floats, 10));
    printf("%f\n", floatMin(floats, 10));


    //int num = 0;
    //double x;
    //int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    //for (num = 0; num < 10; num++) {
    //    num = num + array[num];
    //    if (num > 5) {
    //        b = num;
    //    }
    //    else {
    //        a = num;
    //    }
    //    x = num / 10;
    //}

    //printf("%d, %f, %d, %d", num, x, a, b);
}