#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void fillInteger(int a[], int length, int min, int max) {
    int range = max - min + 1;
    for (int i = 0; i < length; i++) {
        a[i] = rand() % range + min;
    }
}

void fillCharacter(char a[], int length, char min, char max) {
    int range = max - min + 1;
    for (int i = 0; i < length; i++) {
        a[i] = rand() % range + min;
    }
}

void findConsecutive(int a[], int length) {
    for (int i = 1; i < length; i++) {
        int fir;
        fir = a[i - 1] - a[i];
        if (abs(fir) == 1) {
            printf("Elements [%d] and [%d] are consecutive.\n", i - 1, i);
        }
    }
}

void findTriples(char a[], int length) {
    for (int i = 2; i < length; i++) {
        if (a[i - 2] == a[i] - 2 && a[i - 1] == a[i] - 1) {
            printf("%c%c%c\n", a[i - 2], a[i - 1], a[i]);
        }
    }
}

//void findWords(char a[], int length, char letter) {
//    int exists = 0;
//    for (int i = 0; i < length, i++) {
//        if (c[i] == letter) {
//            exists++;
//        }
//    }
//    if (exists) {
//        for (int i = 0; i < )
//    }
//}

void fillFloat(float a[], int length, float min, float max) {
    float range = max - min;
    for (int i = 0; i < length; i++) {
        a[i] = (float)rand() / (float)(RAND_MAX)*max + min;
    }
}

float floatMean(float a[], int length) {
    float mean = 0;
    for (int i = 0; i < length; i++) {
        mean += array[i] / (float)length;
    }
    return mean;
}

float floatMin(float a[], int length) {
    float min = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float floatMax(float a[], int length) {
    float max = array[0];
    for (int i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

void printArray(int a[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printArray(float a[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%f ", arr[i]);
    }
    printf("\n");
}

void printArray(char a[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

void test(void) {
    int num[10];
    fillInteger(num, 10, 1, 10);
    printArray(num, 10);

    char chars[10];
    fillCharacter(chars, 10, 'a', 'z');
    printArray(chars, 10);

    float floats[10];
    fillFloat(floats, 10, 0, 10);
    printArray(floats, 10);

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