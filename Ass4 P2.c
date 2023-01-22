/*Assignment 4.   Program 2
 WAP to implement user defined function 
 armstrong(),that checks whether
 a given number is armstrong or not.
 153=(1*1*1)+(5*5*5)+(3*3*3)
153 =   1   +  125  +   27
*/
#include<stdio.h>
#include<conio.h>
void armstrong();
void armstrong()
{         int num, originalNum, remainder, result = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

}

}


void main()
{
clrscr();

    armstrong();
    
getch();    
}