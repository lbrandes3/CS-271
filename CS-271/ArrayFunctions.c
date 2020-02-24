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
        mean += a[i] / (float)length;
    }
    return mean;
}

float floatMin(float a[], int length) {
    float min = a[0];
    for (int i = 1; i < length; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

float floatMax(float a[], int length) {
    float max = a[0];
    for (int i = 1; i < length; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

void printIntArray(int a[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
// a comment
void printFloatArray(float a[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%f ", a[i]);
    }
    printf("\n");
}

void printCharArray(char a[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%c ", a[i]);
    }
    printf("\n");
}