#include<stdio.h>

// Binary search apply only in sorted array 
int BinarySearch(int arr[],int n,int element){
  int start =0 ,end = n-1 ,mid;
  while(start <=end){
    mid = start + (end -start)/2;
    if(arr[mid] == element)
    return mid;
    else if(arr[mid] > element)
    end = mid - 1;
    else
    start = mid + 1;
  }
  return -1;
}

void main(){
  int n,i,item,result;
  int arr[10];
  printf("Enter the value of n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }

  printf("Enter the item you want to search in the array : ");
  scanf("%d",&item);


  result = BinarySearch(arr,n,item);
  printf("The item present on the index : %d",result);
   
}