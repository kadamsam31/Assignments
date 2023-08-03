#include<stdio.h>
#include<conio.h>
struct person
{
  int age;
  float w;
}p;
void *ptr = &p;
void main()
{
 // struct person p;
 // struct person *ptr;
 // ptr = &p;
  clrscr();
  printf("enter age:\n");
  scanf("%d",&ptr->age);
  printf("enter weight :");
  scanf("%0.2f",&ptr->w);
  printf("\ndisplay\n");
  printf("age:%d\n",ptr->age);
  printf("weight:%2.f",ptr->w);
  getch();
}
