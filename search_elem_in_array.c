//LE-q3 DSA
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements to be stored in array-");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array-");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("displaying elements of array-");
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
   //to search an element in array
   printf("\n");
   int b;
   printf("enter the element to be searched in the array-");
   scanf("%d",&b);
   for(int i=0;i<n;i++){
       if(a[i]==b){
           printf("%d is found at index-%d",b,i);
          
       }
     
   }
  
      
   
   
    return 0;
}

