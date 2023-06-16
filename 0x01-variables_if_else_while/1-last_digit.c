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

    // Seed the random number generator with the current line 
    srand(time(0));

    // Generate a random number between -RAND_MAX/2 and RAND_MAX/2
    n = rand() - RAND_MAX / 2;

    // Print the number and its descriptions 
    printf("%d %s\n", n, describe_number(n));

    return 0;
}
