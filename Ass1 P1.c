//  WACP to read 2 numbers and exchange
//  the numbers without using extra
//  variable and print them. 
#include<stdio.h>
#include<conio.h>
void main()
{        int a,b;

clrscr();
   
     printf("Enter Two Numbers : \n");
     scanf("%d%d",&a,&b);
 printf("before exchange \na = %d\nb = %d ",a,b);
    b=a+b;
    a=b-a;
    b=b-a;
    
    printf("\nafter exchange \na = %d \nb = %d ",a,b);





getch();
}