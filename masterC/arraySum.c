#include <stdio.h>
int sum(int arr[], int n)
{
    int total = 0, i;
    for (i = 0; i < n; i++)
        total += arr[i];
    return total;
}
float average(int sum, int n)
{
    return sum / n;
}
void main()
{
    int size, i, total;
    float avg;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the array elements: ");
    for (i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    total = sum(arr, size);
    avg = average(total, size);
    printf("Average = %.2f\nSum=%d\n", avg, total);
}