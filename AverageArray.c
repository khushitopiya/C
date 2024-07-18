#include <stdio.h>
int main() 
{
    int arr[] = {20, 40, 60, 80, 100, 120, 140, 160, 180, 200};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 0;

    // sum
    for (int i=0;  i<n;  i++)
    {
        sum += arr[i];
    }

    // average
    double average = (double)sum / n;
    printf("Average: %.2f\n", average);

    return 0;
}
