/*  Assignment 3. Program 2
 WAP to read 10 numbers using for loop.
 Display addition of even numbers 
 and odd numbers separately*/
#include<stdio.h>
#include<conio.h>
void main()
{        int i,no,ev=0,od=0;
clrscr();
    printf("Enter The Number : \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&no);
    
    if(no%2==0)
    {
       // ev++;
        ev=ev+no;
    }
    
    else
    {
       // od++;
        od=od+no;
    }
    }
    printf("\naddition of even numbers = %d",ev);
    printf("\naddition of odd numbers = %d",od);
    
    
    
getch();    
}