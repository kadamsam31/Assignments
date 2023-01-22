/* Assignment 2.  project 3
  WAP to determine whether the
  input character is capital or small
  letter, digits or special symbol*/
#include<stdio.h>
#include<conio.h>
void main()
{        char D;
clrscr();
         printf("Enter Anything :\n");
        scanf("%c",&D);
    if(D>=48 && D<=57)
    {
        printf("\t%c is Number",D);
    }
    
    if(D>=65 && D<=90)
    {
     printf("\t%c is capital letter ",D);
    }
    
    if(D>=97 && D<=122)
    {
     printf("\t%c is small case latter",D);
    }
   if (D>=1 && D<47 || D>=58 && D<64 || D>=90&& D<96 || D>=122&& D<255)
   {  printf("\n\t%c is special symbol",D);
    
    }
getch();
}