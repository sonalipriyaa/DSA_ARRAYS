//LE-Q6 DSA
#include <stdio.h>
int main()
{
    int a[5]={2,5,3,9,7};
    //to find next greater element in array;
    int i,j;
    int count;
    for(i=0;i<5;i++){
        count=-1;
        for(j=i+1;j<5;j++){
            if(a[i]<a[j]){
                count=a[j];
                break;
            }
        }
        printf("next greater element of %d is = %d\n",a[i],count);
    }
   return 0;
}
