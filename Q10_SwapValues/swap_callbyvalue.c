#include<stdio.h>
#include<conio.h>

void swap_callbyvalue(int a,int b);

void main()
{
 int x , y ;
 printf("Enter the value of x and y : ");
 scanf("%d%d",&x,&y);

 printf("\nBefor swapping : ");
 printf("\nx = %d \ny = %d",x,y);
 
swap_callbyvalue(x,y);

 printf("\nAfter swaping : ");
 printf("\nx = %d \ny = %d",x,y);

}

void swap_callbyvalue(int a,int b){
  int temp ;
  temp = a;
  a = b;
  b = temp;
}