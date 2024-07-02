//DSA LAB 2 Q3
#include <stdio.h>
int main()
{
   //to explain array of pointers
   int var[5]={10,20,30,40,50};
   int *ptr[6];
   for(int i=0;i<5;i++){
       ptr[i] = &var[i];
   }
   for(int i=0;i<5;i++){
       printf("%d ",*ptr[i]);
   }
   return 0;
}
