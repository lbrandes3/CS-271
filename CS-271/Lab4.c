#include <stdio.h>
#include "ArrayFunctions.h"

int main(void) {
    printf("Problem 1\n");
    int probOne[20];
    fillInteger(probOne, 20, -20, 20);
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", probOne[i]);
    }
    printf("\n");

    for (int i = 10; i < 20; i++) {
        printf("%d ", probOne[i]);
    }
    printf("\n");
    findConsecutive(probOne, 20);

    printf("Problem 2\n");
    char probTwo[50];
    fillCharacter(probTwo, 50, 'a', 'z');

    for (int i = 0; i < 50; i++) {
        printf("%c ", probTwo[i]);
    }
    printf("\n");
    findTriples(probTwo, 50);

    printf("Problem 3\n");
    char* probThree[20];
    probThree[0] = "one";
    probThree[1] = "two";
    probThree[2] = "three";
    probThree[3] = "four";
    probThree[4] = "five";
    probThree[5] = "six";
    probThree[6] = "seven";
    probThree[7] = "eight";
    probThree[8] = "nine";
    probThree[9] = "ten";
    probThree[10] = "eleven";
    probThree[11] = "twelve";
    probThree[12] = "thirteen";
    probThree[13] = "fourteen";
    probThree[14] = "fifteen";
    probThree[15] = "sixteen";
    probThree[16] = "seventeen";
    probThree[17] = "eighteen";
    probThree[18] = "nineteen";
    probThree[19] = "twenty";

    printf("Enter a character: ");
    char c = getchar();
    if (c < 'a') {
        c += ('a' - 'A');
    }

    while (c < 'a' || c > 'z') {
        printf("Enter a character: ");
        c = getchar();
        printf("\n");
        if (c < 'a') {
            c += ('a' - 'A');
        }
    }
    findWords(probThree, 20, c);

    printf("Problem 4\n");
    float probFour[10];
    fillFloat(probFour, 10, 1.0, 50.0);

    for (int i = 0; i < 10; i++) {
        printf("%f  ", probFour[i]);
    }
    printf("\n%f\n", floatMean(probFour, 10));
    printf("%f\n", floatMin(probFour, 10));
    printf("%f\n", floatMax(probFour, 10));

}