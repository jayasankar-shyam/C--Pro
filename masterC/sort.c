#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}
void main()
{
    int arr[] = {5, 2, 7, 8, 1, 3}, n = 6,i;
    sort(arr, n);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
