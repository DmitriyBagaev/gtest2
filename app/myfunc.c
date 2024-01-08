
#include <stdio.h>
#include <stdlib.h>
#include "myfunc.h"
#include <math.h>

int myfunc(int b) {
    char *buffer = malloc(sizeof(char) * 1000);
    buffer [0] = b + 4;
    // здесь должен ругаться sonarcloud, т.к. утечка памяти
    return buffer[0];
}

int val;

int fibonachi(int num) {
    int prev = 1;
    int next = 1;

    if (num < 0)
        return 0;

    if (num <= 2)
        return num;

    int i = 2;
    while (i < num) {
        next += prev;
        prev = next - prev;
        i++;
    }

    return next;
}

void squares(double a, double b, double c) {
    double d, X1, X2;
    d = (b * b) - (4 * a * c);

    if (d == 0) {
        X1 = (-b + sqrt(d)) / (2 * a);
        printf("X1=X2=%f", X1);
    }

    if (d > 0) {
        X1 = (-b + sqrt(d)) / (2 * a);
        X2 = (-b - sqrt(d)) / (2 * a);
        printf("X1=%f\n",X1);
        printf("X2=%f",X2);
    }

    if (d < 0) {
        printf("Нет корней");
    }
}

void printStdoutMessages() {
    printf("This is a test message from myfunc.c\n");
    printf("Do not disturb\n");
}
