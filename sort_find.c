//HE Q1 DSA
#include <stdio.h>

int main()
{
    int n;
    printf("enter the no of elements in array-");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array-");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements of array when unsorted-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    //sorting array
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nthe elements of array when sorted-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nthe smallest element of array is - %d",a[0]);
    printf("\nthe second smallest element of array is - %d",a[1]);

    return 0;
}
