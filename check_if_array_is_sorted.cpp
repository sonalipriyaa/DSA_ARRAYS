#include <iostream>
using namespace std;
bool check(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4};
    int size = 6;
    if (check(arr, size) == true)
    {
        cout << "array is sorted";
    }
    else
    {
        cout << "array is not sorted";
    }

    return 0;
}