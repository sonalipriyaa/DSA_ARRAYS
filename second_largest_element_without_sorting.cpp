#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 4, 7, 7, 5};
    int n = 6;
    /*int largest = a[0];
     for (int i = 0; i < n; i++)
     {
         if (a[i] > largest)
         {
             largest = a[i];
         }
     }
     int second_largest = -1;
     for (int j = 0; j < n; j++)
     {
         if (a[j]>second_largest && a[j] != largest)
         {
             second_largest = a[j];
         }
     }
     cout << "second largest element is: " << second_largest;*/
    // optimal solution
    int largest = a[0];
    int second_largest = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > largest)
        {
            second_largest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > second_largest)
        {
            second_largest = a[i];
        }
    }
    cout << "second largest element is : " << second_largest;
    return 0;
}