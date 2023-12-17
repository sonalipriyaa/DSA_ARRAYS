#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int temp = a[0];
    int n = 5;
    cout << "array before left rotate\n";
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    cout << "\n";
    for (int i = 1; i < n; i++)
    {
        a[i - 1] = a[i];
    }
    a[n - 1] = temp;
    cout << "array after one left rotate";
    cout << "\n";
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }

    return 0;
}