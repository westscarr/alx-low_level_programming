#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Functions to display 

int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'e' && letter != 'q')
        {
            putchar(letter);
        }
    }
    putchar('\n');
    return (0);
}
