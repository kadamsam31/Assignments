#include<stdio.h>
#include<conio.h>
void sarray(int *arr,int size);
void main()
{
  int i,size;
  clrscr();
  printf("enter size of the array:");
  scanf("%d",&size);
  void arr[size];
  printf("enter the element of the array:\n");
  for(i=0;i<size;i++)
  {
     scanf("%d",&arr[i]);
  }
  sarray(arr,size);
  printf("array in sorted:\n");
  for(i=0;i<size;i++)
  {
    printf("%d\t",arr[i]);
  }
  getch();
}
void sarray(int *arr,int size)
{
   int temp,i,j;
   for(i=0;i<size-1;i++)
   {
      for(j=0;j<size-i;j++)
      {
	if(arr[j]>arr[j+1])
	{
	   temp=arr[j];
	   arr[j]=arr[j+1];
	   arr[j+1]=temp;
	}
      }
   }
}