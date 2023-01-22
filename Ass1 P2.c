// WAP to read price and quantity. 
// Consider 10% discount and display
// bill amount to pay.  
#include<stdio.h>
#include<conio.h>
void main()
{        int pr,qn,amt;
        float dis,p;
// pr= price ; qn= quantity ; amt= amount
// dis= discount ; p= pay 
clrscr();
   
 printf("Enter price and quantity : \n");
     scanf("%d%d",&pr,&qn);
     amt=pr*qn;
    dis=amt*0.10;
     p=amt-dis;
    printf("\ndiscount ");
    printf("bill Amount To Pay with discount = %00.1f",p);
  





getch();
}