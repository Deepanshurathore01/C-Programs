#include<stdio.h>
#include<conio.h>

void main(){
  printf("Size of all integer data types :");
  printf("\nthe size of short interger is : %hd",sizeof(short int));
  printf("\nthe size of unsigned short integer is : %hu",sizeof(unsigned short int));
  printf("\nthe size of unsigned integer is : %u",sizeof(unsigned int));
  printf("\nthe size of integer is : %d ",sizeof(int));
  printf("\nthe size of long integer is : %ld ",sizeof(long int));
  printf("\nthe size of unsigned long integer is : %lu ",sizeof(unsigned long int));
  printf("\nthe size of long long int is : %ld ",sizeof(long long int));
  printf("\nthe size of unsigned long long int is : %lu ",sizeof(unsigned long long int));

   printf("\n\nSize of all Character data types :");
   printf("\nthe size of Character is : %lu ",sizeof(char));
   printf("\nthe size of signed Character is : %lu ",sizeof(signed char));
   printf("\nthe size of unsigned Character is : %lu ",sizeof(unsigned char));


  printf("\n\nSize of all Floating point data types :");
  printf("\nthe size of float is : %lu ",sizeof(float));
  printf("\nthe size of double is : %lu ",sizeof(double));
  printf("\nthe size of long double is : %d ",sizeof(long double));

}