#include <stdio.h>
void linearSearch(int arr[],int n)
{
    int element, i, flag = 0;
    printf("Enter the element to be searched : ");
    scanf("%d", &element);
    for (i = 0; i < n; i++)
        if (arr[i] == element)
        {
            flag = 1;
            break;
        }
    if (flag == 1)
        printf("The element %d is found at index %d\n", element, i);
    else
        printf("The element %d  not found\n", element);
}
void main()
{
    int size, element, i, flag = 0;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    linearSearch(arr, size);
}