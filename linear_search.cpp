#include <iostream>
using namespace std;
int func(int a[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {6, 7, 8, 4, 1};
    int n = 5;
    int nu = 4;
    int aa = func(arr, n, nu);
    cout << "index of first occurance of " << nu << " is " << aa;

    return 0;
}