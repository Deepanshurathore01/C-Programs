#include<stdio.h>
#include<conio.h>
#include<math.h>

void main(){
  int a,b,c,n;
  double x , y;
   
  char ch = 'y' || 'Y';

  do{
    printf("\n press 1 for Addition");
    printf("\n press 2 for Substraction");
    printf("\n press 3 for Multiplication");
    printf("\n press 4 for Division");
    printf("\n press 5 for Modulus");
    printf("\n press 6 for finding a to power b");
    printf("\n press 7 for finding  to sqrt of a ");
    printf("\n press 8 for absolute value ");
    printf("\n press 9 for log value ");
    printf("\n press 10 for log10 value ");
    printf("\n press 11 for sin value ");
    printf("\n press 12 for cos value ");
    printf("\n press 13 for ceil value ");
    printf("\n press 14 for floor value ");
    printf("\n press 15 for Exponential value ");

    printf("\n\n Enter your choice : ");
    scanf("%d",&n);

    switch(n){
      case 1:
      printf("\nEnter two numbers a and b for addition ");
      scanf("%d%d",&a,&b);
      c = a+b;
      printf("\nthe result of addition a+b is : %d ",c);
      break;

      case 2:
      printf("\nEnter two numbers a and b for sbustraction ");
      scanf("%d%d",&a,&b);
      c = a-b;
      printf("\nthe result of substaction a-b is : %d ",c);
      break;

      case 3:
      printf("\nEnter two numbers a and b for multiplication ");
      scanf("%d%d",&a,&b);
      c = a*b;
      printf("\nthe result of multiplication a*b is : %d ",c);
      break;

      case 4:
      printf("\nEnter two numbers a and b for division ");
      scanf("%d%d",&a,&b);
      c = a/b;
      printf("\nthe result of division a/b is : %d ",c);
      break;

      case 5:
      printf("\nEnter two numbers a and b for modulus ");
      scanf("%d%d",&a,&b);
      c = a%b;
      printf("\nthe result of modulus a%b is : %d ",c);
      break;

      case 6:
      printf("\nEnter two numbers a and b for power ");
      scanf("%d%d",&a,&b);
      c = pow(a,b);
      printf("\nthe result of power pow(a,b) is : %d ",c);
      break;

      case 7:
      printf("\nEnter a number to find its sqrt  ");
      scanf("%d",&a);
      c = sqrt(a);
      printf("\nthe result of sqrt(a) is : %d ",c);
      break;

      case 8:
      printf("\nEnter a number to find its absolute value  ");
      scanf("%d",&a);
      c = abs(a);
      printf("\nthe result of abs(a) is : %d ",c);
      break;

      case 9:
      printf("\nEnter x number to find its log value  ");
      scanf("%lf",&x);
      y = log(x);
      printf("\nthe result of log(a) is : %lf ",y);
      break;

      case 10:
      printf("\nEnter x number to find its log value  ");
      scanf("%lf",&x);
      y = log10(x);
      printf("\nthe result of log(a) is : %lf ",y);
      break;

      case 11:
      printf("\nEnter x number to sin value  ");
      scanf("%lf",&x);
      y = sin(x);
      printf("\nsin(%.2lf) = %.2lf\n", x, y);
      break;

      case 12:
      printf("\nEnter x number to find cos value  ");
      scanf("%lf",&x);
      y = cos(x);
      printf("\ncos(%.2lf) = %.2lf\n", x, y);
      break;

      case 13:
      printf("\nEnter x number to find ceil value  ");
      scanf("%lf",&x);
      c = ceil(x);
      printf("\nceil of (%.2lf) = %d\n", x, c);
      break;

      case 14:
      printf("\nEnter x number to find floor value  ");
      scanf("%lf",&x);
      y = floor(x);
      printf("\nFloor integer of %.2f = %.0f", x,y);
      break;

      case 15:
      printf("\nEnter x number to find Exponential value  ");
      scanf("%lf",&x);
      y = exp(x);
      printf("\nExponential of %.2f = %.0f", x,y);
      break;

      default :
      printf("Invalid case ");

    }
    

  printf("\n Do you want to Continue : ");
  fflush(stdin);
  scanf("%c",&ch);
  }while(ch == 'y'|| ch =='Y');
}