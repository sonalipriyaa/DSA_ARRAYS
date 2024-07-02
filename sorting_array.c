//LE-Q4 DSA
#include <stdio.h>
//to sort the elements
int main()
{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS TO BE STORED IN ARRAY-");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array-");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("displaying elements of array without sorting-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    //array after sorting
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\ndisplaying elements of array after sorting-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

