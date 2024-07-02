//LE-Q1-DSA
#include <stdio.h>
int main()
{
   int n,j,k;
   printf("enter the number of elements to be stored-");
   scanf("%d",&n);
   int a[n];
   printf("enter the elements of the array-");
   for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
   }
   //to find smallest and largest element of array
   int small=a[0];
   int large=a[0];
   for( j=0;j<n;j++){
       if(a[j]<small){
           small=a[j];
       }
   }
   for( k=0;k<n;k++){
       if(a[k]>large){
           large=a[k];
       }
   }
   printf("The smallest number in array is-%d \n",small);
   printf("The largest number in array is-%d ",large);
    return 0;
}
