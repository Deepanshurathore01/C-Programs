#include<stdio.h>
#include<conio.h>

void main()
{
  char ch ;
  printf("Enter a character : ");
  scanf("%c",&ch);

  if(ch >=47 && ch <= 56)
  {
    printf("the char is in Number's format");
  }
  else if(ch >=65 && ch <=90){
  printf("The char is in uppercase letter");
  }
  else if(ch >=97 && ch <=122)
  {
    printf("the char is in lowercase letter");
  }
  else
  {
    printf("The char is special symbols");
  }
  
}