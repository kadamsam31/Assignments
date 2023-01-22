// Assignment 3.  Program 4
//WAP to print following series.
// 0 1 1 2 3 5 8 13......N
#include<stdio.h>    
#include<conio.h>
void main()    
{      int n1,n2,n3,i,number;    
clrscr();

     printf("Enter the number :");    
     scanf("%d",&number);    

    n2=number%10; 
    n1=number/10;
    printf("%d\n%d",n1,n2);
    
    
 for(i=2;i<20;i++)//loop starts from 2 because 0 and 1 are already printed    
{    

    n3=n1+n2; 
  
    n1=n2;    

    n2=n3;    
 

  printf(" \n%d",n3);    

  
}  

}    
    