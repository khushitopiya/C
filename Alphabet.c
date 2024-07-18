#include <stdio.h>

int main()
{
    char rows = 4;
    char character='A';

    for (int i =0; i<=rows;  i++)
    {
        for (int j=0;  j<=i;  j++)
        {
            printf("%c ", character++);
            
        }
        printf("\n");
    }

    return 0;
}


