#include <stdio.h>

// Functions to display 

int main(void)
{
     for (int number = 48; number < 58; number++)
     {
         printf("%c", number);
         if (number != 57)
         {
             printf(", ");
         }
     }
     printf("\n");
     return 0;
}
