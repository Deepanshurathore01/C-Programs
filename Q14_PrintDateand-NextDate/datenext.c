#include <stdio.h>
// #include<conio.h>

int main() {
  int day, month, year;
  printf("Enter the day month and year form dd-mm-yyyy format  : ");
  scanf("%d %d %d", &day, &month, &year);

  if (day < 1 || day > 31 || month < 1 || month > 12) {
        printf("Please enter a valid date.\n");
        return 1; // Exit the program with error code
    }

  switch (month) {
    case 1:
     if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / january / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / february / %d ", day, year);
        } else {
          printf("\n next date is : %d / january / %d", day + 1, year);
        }
      }
      break;  

      case 2:
      if (day >= 1 && day <= 28) {
        printf("\n the date is : %d / february / %d ", day, year);
        day++;
        if ( day ==28 ) {
          day =1;
          printf("\n next date is : %d / march / %d", day , year);
        }else {
          printf("\n next date is : %d / february / %d", day, year);
        }
      }
      else if( day == 29 && year%4 == 0 ){
        printf("\n the date is : %d / february / %d ", day, year);
        day =1;
        printf("\n next date is : %d / march / %d ", day, year);
    }
   break;

    case 3:
       if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / march / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / April / %d ", day, year);
        } else {
          printf("\n next date is : %d / march / %d", day + 1, year);
        }
      }
      break; 

    case 4:
       if (day >= 1 && day <= 30) {
        printf("\n the date is : %d / April / %d ", day, year);
        if (day == 30) {
          day = 1;
          printf("\n next date is : %d / May / %d ", day, year);
        } else {
          printf("\n next date is : %d / April / %d", day + 1, year);
        }
      }
      break;

    case 5:
       if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / May / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / June / %d ", day, year);
        } else {
          printf("\n next date is : %d / May / %d", day + 1, year);
        }
      }
      break; 

      case 6:
       if (day >= 1 && day <= 30) {
        printf("\n the date is : %d / June / %d ", day, year);
        if (day == 30) {
          day = 1;
          printf("\n next date is : %d / July / %d ", day, year);
        } else {
          printf("\n next date is : %d / August / %d", day + 1, year);
        }
      }
      break;

      case 7:
       if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / July / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / August / %d ", day, year);
        } else {
          printf("\n next date is : %d / July / %d", day + 1, year);
        }
      }
      break; 

      case 8:
       if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / August / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / September / %d ", day, year);
        } else {
          printf("\n next date is : %d / August / %d", day + 1, year);
        }
      }
      break; 

      case 9:
       if (day >= 1 && day <= 30) {
        printf("\n the date is : %d / September / %d ", day, year);
        if (day == 30) {
          day = 1;
          printf("\n next date is : %d / October / %d ", day, year);
        } else {
          printf("\n next date is : %d / September / %d", day + 1, year);
        }
      }
      break; 

      case 10:
       if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / October / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / November / %d ", day, year);
        } else {
          printf("\n next date is : %d / October / %d", day + 1, year);
        }
      }
      break; 

      case 11:
       if (day >= 1 && day <= 30) {
        printf("\n the date is : %d / November / %d ", day, year);
        if (day == 30) {
          day = 1;
          printf("\n next date is : %d / December / %d ", day, year);
        } else {
          printf("\n next date is : %d / November / %d", day + 1, year);
        }
      }
      break; 

      case 12:
       if (day >= 1 && day <= 31) {
        printf("\n the date is : %d / December / %d ", day, year);
        if (day == 31) {
          day = 1;
          printf("\n next date is : %d / January / %d ", day, year+1);
        } else {
          printf("\n next date is : %d / December / %d", day + 1, year);
        }
      }
      break; 

      default:
      printf("The give date is invalid please enter a valid date ? ");
  }

  // getch();
  return 0;
}
