#include<stdio.h>
#include<conio.h>

void main(){
  int num;
  // clrscr();
  printf("Enter a number ");
  scanf("%d",&num);

  if(num > 0){
    printf("positive number");
  }
  else if(num < 0){
    printf("negative number");
  }
  else{
    printf("The number is zero");

  }
}