//LE-Q7 DSA
#include <stdio.h>

int main()
{
   int n=4;
   int m=4;
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   printf("The 2D matrix is-\n");
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   //part -a
   //no of non zero elements
   int count=0;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           if(a[i][j]!=0){
            count=count+1;
          }
       }
       }             
  printf("%d elements are non zero",count);
  //part -b
  //sum of elements above leading diagonal
  printf("\nthe leading diagonal elements are-\n");
  for(int i=0;i<3;i++){
      for(int j=0;j<=i;j++){
          printf("%d",a[i][j]);
      }
      printf("\n");
  }
  printf("sum=");
  int sum=0;
  for(int i=0;i<3;i++){
      for(int j=0;j<=i;j++){
          sum=sum+a[i][j];
         }
     }
    printf("%d",sum);
    //part -c
    //display elements below minor diagonal
   
    return 0;
}
