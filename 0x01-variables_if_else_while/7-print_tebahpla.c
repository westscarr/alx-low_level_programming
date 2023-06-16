#include <stdio.h>

// Function to print the reversed lowercase alphabet
// and a newline character

int main()
{
    char letter;

    for (letter = 'z'; letter >= 'a'; letter--)
    {
        putchar(letter);
    }
    putchar('\n');
    return 0;
}
