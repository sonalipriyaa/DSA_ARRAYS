#include<iostream>
using namespace std;
int main(){
int a[]={1, 2, 4, 7, 7, 5};
int n=6;
int smallest=a[0];
int second_smallest=INT_MAX;
for(int i=0;i<n;i++){
    if(a[i]<smallest){
        second_smallest=smallest;
        smallest=a[i];
    }
    else if(a[i]!=smallest && a[i]<second_smallest){
        second_smallest=a[i];
    }
}
cout<<"second smallest element of array is : "<<second_smallest;
    return 0;
}
