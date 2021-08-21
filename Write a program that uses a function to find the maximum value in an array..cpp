//Write a program that uses a function to find the maximum value in an array.//
#include <stdio.h>
int maximum(int [],int);
int main(void) 
{
    int values[5], i, max;
    printf("Enter 5 numbers\n");
    for(i =0; i<5; ++i)
    scanf ("%d", &values[i]);
    max = maximum(values,5);
    printf("\n Maximum value is %d\n", max);
    
    
    
    return 0;
}
int maximum(int values[], int n)
{
    int max_value, i;
    max_value = values[0];
    for(i = 1; i< n; ++i)
    if (values[i] > max_value)
    max_value = values[i];
    return max_value;
}
Output
Enter 5 numbers
11
15
8
21
7
Maximum value is 21

