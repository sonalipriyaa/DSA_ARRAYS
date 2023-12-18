#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int d;
    cout << "enter the no of left rotations to be done\n";
    cin >> d;
    int temp[3];
    for (int i = 0; i < d; i++)
    {
        temp[i] = a[i];
    }
    for (int j = d; j < n; j++)
    {
        a[j - d] = a[j];
    }
    for (int k = n - d; k < n; k++)
    {
        a[k] = temp[k - (n - d)];
    }
    cout << "array after rotatin is : ";
    for (int l = 0; l < n; l++)
    {
        cout << a[l] << " ";
    }
    return 0;
}