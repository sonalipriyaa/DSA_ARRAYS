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
    printf("\narranged elements - ");
    for(int i=0;i<n;i++){
        int count =0;
        int temp;
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                count=a[j];
                break;
            }
          
        }
          printf("%d ",count);
    }

    return 0;
}
