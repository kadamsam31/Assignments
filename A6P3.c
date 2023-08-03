#include<stdio.h>
#include<conio.h>
void main(int argc,char *argv[])
{
     int a,b,sum;
     clrscr();
     if(argc!=3)
     {

     printf("enter a and b:\n");

     }
     scanf("%d%d",&a,&b);
     a=atoi(argv[1]);
     b=atoi(argv[2]);
     sum=a+b;
     printf("addition=%d\n",sum);
     getch();
}
