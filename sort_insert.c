#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("Aditya Belgaonkar 16010123026\n");
    int size, element, i, j;
    printf("input size: \n");
    scanf("%d", &size);
    int array[size + 1];

    printf("Enter elements: \n");
    for(i = 0; i < size; ++i)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < size - 1; i++) 
    {
        for (j = 0; j < size - i - 1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array\n");

    for(i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }

    printf("\nEnter element to insert: \n");
    scanf("%d", &element);

    for(i = 0; i < size + 1; ++i)
    {
        if(array[i] >= element)
        {
            for(j = size; j > i; --j)
            {
                array[j] = array[j-1];
            }
            array[i] = element;
            break;
        }
    }

    printf("Array with inserted element\n");

    for(i = 0; i < size + 1; ++i)
    {
        printf("%d ", array[i]);
    }

    return 0;
}