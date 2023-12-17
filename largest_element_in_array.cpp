#include <iostream>
using namespace std;
int main()
{
    int a[] = {3, 2, 1, 5, 2};
    int largest = a[0];
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    cout << "largest element in array is:";
    cout << largest;

    return 0;
}