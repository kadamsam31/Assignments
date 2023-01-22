// Assignment 3.  Program 1
//  WAP to read any number and
//  print reverse number
#include<stdio.h>
#include<conio.h>
void main()
{    int n,r;
clrscr();

    printf("Enter any Number : ");
    scanf("%d",&n);
    printf("\nReverse Number :  ");
    for(;n>0;)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
    }
getch();    
}