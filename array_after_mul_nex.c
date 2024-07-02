//HE Q4 DSA
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
    printf("the elements of array-\n");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nnew array-\n");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            a[i]=a[i]*a[j];
            break;
        }
        printf("%d ",a[i]);
    }

    return 0;
}
