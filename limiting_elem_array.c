#include <stdio.h>

int main()
{
    int arr[10], n, t, a, b;
    printf("Enter number of elements");
    scanf("%d", &n);
    printf("Enter the elements in array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the limiting elements:\na = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    int count = 0;
    printf("The elements between %d and %d are:\n", a, b);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a == arr[i] && b == arr[j])
            {
                for (int k = i; k <= j; k++)
                {
                    printf("%d ", arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\nTotal number of elements between %d and %d is %d", a, b, count);
    return 0;
}
