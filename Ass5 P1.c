/*Assignment 5.   Program 1

WAP to read 10 numbers for array.
 Display addition of those numbers 
which are present at even index position. 


*/
#include<stdio.h>
#include<conio.h>
void main()
{    int a[10],r,sum;
    r=0;
clrscr();
    printf("Enter 10 Numbers : \n");
    for(sum=0;r<10;r++)
    {
         scanf("%d",&a[r]);
         if (a[r]%2==0)
           sum+=a[r];
    }
    printf("\n Addition Of Even Numbers=%d",sum);


getch();
}