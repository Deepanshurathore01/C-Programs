#include<stdio.h>
#include<conio.h>

int maxElement(int arr[],int n);

void main(){
  int n,i,maxelem;
  int arr[10];
  printf("Enter the value of n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  maxelem = maxElement(arr,n);
  printf("The maximum element in an array is : %d",maxelem);
// getch();
}

int maxElement(int arr[],int n){
  int max = arr[0];
  for(int i=1;i<n;i++){
    if(arr[i]>max)
    {
      max =arr[i];
    }
  }
  return max;
}