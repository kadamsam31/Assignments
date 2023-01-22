/*
Assignment 5.  Program 2
Write a program to read 10 numbers
 for array. Display minimum and maximum
 array element.
*/

#include<stdio.h>
#include<conio.h>
void main()
{
     int a[10],minimum,maximum,r;
clrscr();
     printf("\n Enter 10 Number");
    for(r=0;r<10;r++)
    {
        scanf("%d",&a[r]);
        if(r==0)
        {
          minimum=a[0];
          maximum=a[0];
        }
        else 
        {
           if(minimum>a[r])
           minimum=a[r];
           if(maximum<a[r])
           maximum=a[r];
        }
    }
         printf("\n minimum=%d,maximum=%d",minimum,maximum);



getch();
}