#include  <stdio.h> 
int main()
{
    
    int i,j,rows=5;
    
    
        for (int i=0;  i<5;  i++)
        {
        for (int j=0;  j<i;  j++)
        {
            printf(" ");
        }

        for (int j=i;  j<5;  j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

