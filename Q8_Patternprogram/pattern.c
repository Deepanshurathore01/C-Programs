#include<stdio.h>
#include<conio.h>

void main(){
  int i , j ,n ,space ,k;
  printf("Enter the n : ");
  scanf("%d",&n);

  for( i=1;i<=n;i++){
    for(j =1;j<=i;j++){
      printf("%d ",j);
    }
    for(space =1 ;space <= 2*(n-i);space++){
      printf("  ");
    }
    k=i;
    for(j =1;j<=i;j++){
      printf(" %d",k);
      k--;
    }
    printf("\n");
}
}