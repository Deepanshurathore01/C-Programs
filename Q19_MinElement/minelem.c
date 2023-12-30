#include<stdio.h>

int minElement(int arr[],int n){
  int min = arr[0];
  for(int i=0;i<=n;i++){
    if(arr[i]<min)
    {
      min =arr[i];
    }
  }
  return min;
}

void main(){
  int n,i,minelem;
  int arr[10];
  printf("Enter the value of n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  minelem = minElement(arr,n);
  printf("The minimum element in an array is : %d",minelem);

}