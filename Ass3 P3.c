/*  Assignment 3.  program 3
WAP to print below pattern
           
      *
    * * *
  * * * * *
* * * * * * *
  * * * * *
    * * *
      *
*/

#include <stdio.h>
#include<conio.h>
void main()
{     int n, j, i;
clrscr();

  printf("Enter number of rows = \n");
  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    for (j=1;j<=n-i;j++)
      printf(" ");

    for (j=1;j<=2*i-1;j++)
      printf("*");

    printf("\n");
  }

  for (i = 1; i <= n - 1; i++)
  {
    for (j= 1;j<= i;j++)
      printf(" ");

    for (j= 1;j<= 2*(n-i)-1;j++)
      printf("*");

    printf("\n");
  }

getch();    
}
    