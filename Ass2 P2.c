/* Assignment 2.  Program2
WAP to read total marks obtained.
  Consider to total marks out of 500.
  Display class obtained depending
  upon following conditions 
a.If total marks obtained < 45 then fail
b.If total marks obtained > 45 and
 total marks obtained: 60 and
 total marks obtained 66 then
 first class with distinction.*/
#include<stdio.h>

void main()
{        int mark ;
       float per;

    printf("Total Marks Obtained:");
    scanf("%d",&mark);
    per=mark/(5);
    
    printf("persentage = %00.1f",per);
    if(per<45)
    {
        printf("\n\tStudent is Fail");
    }
     
    if(per>=45 &&per<60)
    {
        printf("\n\tStudent is Pass");
    }
    
    if(per>=60 && per<66)
    {
        printf("\n\tStudent is first class");
    }
    
    if(per>=66)
    {
        printf("\n\tStudent is first class with distinction");
    }
    
    
    
}