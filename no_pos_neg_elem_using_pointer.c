//DSA LAB 2 Q2
#include <stdio.h>
int main()
{
    int arr[6]={5,7,-9,-8,6,4};
    int *ptr=&arr[0];
    int count1=0;
    int count2=0;
    for(int i=0;i<6;i++){
        if(*(ptr+i)>0){
            count1++;
        }
        if(*(ptr+i)<0){
            count2++;
        }
    }
    printf("%d positive elements in array\n",count1);
    printf("%d negative elements in array",count2);

    return 0;
}
