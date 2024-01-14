#include<stdio.h>
#include<string.h>

struct person{
char name[50];
int age;
float salary;
};

int main(){
  struct person p1;
  strcpy(p1.name , "Deepanshu Rathore");
  p1.age =21;
  p1.salary =1234.1;

  printf("Nama  : %s \n",p1.name);
  printf("Age is : %d \n ",p1.age);
  printf("salay is : %f \n ",p1.salary);
}