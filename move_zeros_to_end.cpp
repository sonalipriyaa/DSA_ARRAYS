#include <iostream>
#include <utility>
using namespace std;
int main()
{
    int a[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    // two pointer concept
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            j = i;
            break;
        }
    }
    for (int i = j + 1; i < n; i++)
    {
        if (a[i] != 0)
        {
            swap(a[i], a[j]);
            j++;
        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    return 0;
}