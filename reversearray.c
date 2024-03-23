#include <stdio.h>

int main() 
{
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int numbers[n];
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; ++i) 
    {
        scanf("%d", &numbers[i]);
    }
    
    printf("Original array: ");
    for (i = 0; i < n; ++i) 
    {
        printf("%d ", numbers[i]);
    }
    
    printf("\nReversed array: ");
    for (i = n - 1; i >= 0; --i) 
    {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}
