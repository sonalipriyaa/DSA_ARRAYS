//LE-Q2-DSA
#include <stdio.h>
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
    printf("displaying elements of array without reversing-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
   //reversing the contents of array
   printf("displaying elements of array after reversing contents-");
   for(int j=n-1;j>=0;j--){
       printf("%d ",a[j]);
   }
    return 0;
}
