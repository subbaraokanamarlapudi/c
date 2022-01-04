#include <stdio.h>

void selectionSort(int *array, int size)
{
    int i, j, min, temp;
    for (i = 0; i < size; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }

        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}
itterate_array(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
int main()
{
    int array[] = {5, 2, 4, 6, 1, 3};
    int size = sizeof(array) / sizeof(array[0]);
    selectionSort(array, size);
    itterate_array(array, size);
    return 0;
}