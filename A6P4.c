#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,max;
   printf("enter a:");
   scanf("%d",&a);
   printf("enter b:");
   scanf("%d",&b);
   max=MAX(a,b);
   printf("maximum number is:%d\n",max);
   getch();
}