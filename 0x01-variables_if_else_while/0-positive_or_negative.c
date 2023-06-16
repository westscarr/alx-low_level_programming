#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// Function to describe the number as a string

const char *describe_number(int n) {
    if (n > 0) return "is positive";
    else if (n == 0) return "is zero";
    else return "is negative";
}

int main(void) {
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    printf("%d %s\n", n, describe_number(n));
    return 0;
}
