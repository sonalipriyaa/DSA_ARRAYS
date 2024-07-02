//DSA LAB 2 Q1
#include <stdio.h>

int main()
{
   int a[5]={5,8,9,4,3};
   int *p=&a[0];
   for(int i=0;i<5;i++){
       printf("%d ",*(p+i));
   }
   return 0;
}
