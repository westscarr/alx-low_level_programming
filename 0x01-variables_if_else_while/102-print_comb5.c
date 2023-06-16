#include <stdio.h>

// Displays loop of unique two-digit combinations

int main(void)
{
    int num1, num2;
    for (num1 = 0; num1 < 100; num1++)
 {
        for (num2 = num1 + 1; num2 < 100; num2++)
        {
            printf("%02d %02d", num1, num2);
            if (num1 != 98 || num2 != 99)
            {
                printf(", ");
            }
        }
    }
    putchar('\n');
    return (0);
}
