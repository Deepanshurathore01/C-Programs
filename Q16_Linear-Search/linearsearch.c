#include<stdio.h>

int linearsearch(int arr[],int n,int el){
  for(int i=1;i<=n;i++){
    if(arr[i] == el){
      return i;
    }
  }
  return -1;
}

void main(){
  int arr[] = {4,6,2,7,8};
  int item , n=5,result;
  printf("Enter the item u want to search in array :");
  scanf("%d",&item);
  result = linearsearch(arr,n,item);
  printf("The element is present in the index : %d",result);
}