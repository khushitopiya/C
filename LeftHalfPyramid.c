#include <stdio.h>
int main() 
{
    int i,j,k,rows=5;
    
    for (int i=0; i<5; i++)
    {
    for (int k=0; k<i; k++)
    {
        printf("  ");
    }
    
    for (int j=i; j<5; j++)
    {
        printf(" *");
    }
        printf("\n");
}
    return 0;
}

