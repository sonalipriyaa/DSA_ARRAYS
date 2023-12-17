#include <iostream>
using namespace std;
int func(int a[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (a[j] != a[i])
        {
            a[i + 1] = a[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{
    // using two pointer approach
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int size = 7;
    cout << "no of unique elements are : " << func(arr, size);
    return 0;
}