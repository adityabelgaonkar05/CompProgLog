#include <stdio.h>

void modify(int arr[], int size) 
{
    int i;
    for (i = 0; i < size; ++i) 
    {
        arr[i] *= 3;
    }
}

int main() 
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;
    
    printf("Original array: ");
    for (i = 0; i < 10; ++i) 
    {
        printf("%d ", array[i]);
    }
    
    modify(array, 10);
    
    printf("\nModified array: ");
    for (i = 0; i < 10; ++i) 
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}
