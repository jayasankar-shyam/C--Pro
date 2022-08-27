#include <stdio.h>
void main()
{
    int size, i;
    int largest = -1, scndLargest = -1;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (i = 0; i < size; i++)
    {
        if (arr[i] > scndLargest && arr[i] != largest)
            scndLargest = arr[i];
    }
    printf("Largest = %d\nSecond Largest = %d\n", largest, scndLargest);
}