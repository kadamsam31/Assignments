// Assignment 2 : program 1
// WAP to read a number and display 
//whether number if positive or negative
#include<stdio.h>
#include<conio.h>
void main()
{           int no;
clrscr();

    printf("Enter The Number : ");
    scanf("%d",&no);
    if(no>0)
    {
     printf("\n\t%d is Positive Number",no);
    }
    
    else
    {
      printf("\n\t%d is Negetive Number",no);
    }
    
getch();
}