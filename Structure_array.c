//DSA LAB 2 Q4
#include <stdio.h>
struct bookdetails{
    int pages;
    float price;
    char name[50];
    char autname[50];
}b;
int main()
{
   printf("enter the name of book-");
   scanf("%s",b.name);
   printf("enter author name-");
   scanf("%s",b.autname);
   printf("enter number of pages in book-");
   scanf("%d",&b.pages);
   printf("enter price-");
   scanf("%f",&b.price);

    return 0;
}
