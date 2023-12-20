#include<stdio.h>
#include<conio.h>

// function has no argument and no retun value
void cube()
{
  int n ,i ,sum =0 ;
  printf("Enter a number ");
  scanf("%d",&n);
  
  for(i =1;i<=n;i++){
    sum += i*i*i;
  }
  printf("The sum of all the cubes till n is : %d",sum);
}

// function has argument but no return type
void cube2(int n)
{
  int i , sum =0;
  
  for(i =1;i<=n;i++){
    sum += i*i*i;
  }
  printf("The sum of all the cubes till n is : %d",sum);
}

//function has no argument but have return type
int cube3()
{
  int n ,i ,sum =0 ;
  printf("Enter a number ");
  scanf("%d",&n);
  
  for(i =1;i<=n;i++){
    sum += i*i*i;
  }
  return sum;
}

// function has argument and have return type
int cube4(int n)
{
  int i , sum =0 ;
  for(i =1;i<=n;i++){
    sum += i*i*i;
  }
  return sum;
}

void main()
{
  
  int n ;
  printf("Enter a number ");
  scanf("%d",&n);
  //cube()
  // cube2(n);

  // int result = cube3();
  int result = cube4(n);
  printf("sum of cubes of n numers is : %d",result);
  // cube();

}