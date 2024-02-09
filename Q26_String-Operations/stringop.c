#include<stdio.h>
#include<string.h>
#include<conio.h>

void getputs();
void compare();
void len();
void copy();
void concat();
void rev();


void main(){
 getputs();
 compare();
 len();
 copy();
 concat();
 rev();
}

void getputs(){
 char s[30];
 printf("\n getsputs function called :\n "); 
  printf("Enter a string? ");
  gets(s);

  printf("the string u enterd is :");
  puts(s);
}

void compare(){
  char s1[50] ="Geeks";
  char s2[50] ="Geek6";
  int result = strcmp(s1,s2);
  printf("\n\n compare function called  function called :\n "); 
  printf("the comparrision of s1 and s2 :%d\n\n",result);
}

void len(){
  char dest[50] ="Hello Coder's " ;
  size_t len = strlen(dest);
  printf("\n\n len function called :\n "); 
  printf("the length of the destination is : %zu\n",len);
}

void copy(){
  char source[50] = "how's the coding gone";
  char dest[50]  ;
  printf("\n\nthe copy function  called: \n");
  strcpy(dest,source);
  printf("Source:%s \n",source);
  printf("destination :%s\n",dest);
}
void concat(){
  char source[50] = "how's the coding gone";
  char dest[50] ="Hello Coder's " ;
  printf("\n\nconcat function called : "); 
  printf("\ndest Before : %s \n",dest);
  strcat(dest,source);
  printf("dest After : %s \n ",dest);
}

void rev()
{
  
  char s[10] ="kirti jat";
  printf("\nreverse function called : "); 
  strrev(s);
  printf("\nthe rev of string is %s",s);
}