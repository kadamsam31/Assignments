/* Assignment 4.  Program 1
 WAP to implement user defined
 function pow(), that calculates
  power of a given number. 
*/
#include<stdio.h>
#include<conio.h>
void pow();
void pow()
{        int no,p,i,np;
     printf("Enter the Number : ");
     scanf("%d",&no);
     printf("And their Power  : ");
     scanf("%d",&p);
    for(i=1;i<=p;i++)
     {
       np=np*no;
     }
     printf("\nCalculated Power of %d = %d",no,np);
}
void main()
{
clrscr();

    pow();
    
getch();    
}