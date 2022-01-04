#include <stdio.h>

void bubble_sort(int *array,int size)
{
    int i,j,temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                itterate_array(array,10);
            }
        }
    }
}

itterate_array(int *array,int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }

    printf("\n");
}

int main()
{
    int array[10] = {10,9,8,7,6,5,4,3,2,1};
    itterate_array(array,10);
    bubble_sort(array,10);
    itterate_array(array,10);
}