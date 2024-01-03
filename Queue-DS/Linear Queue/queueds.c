#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int queue[50] ,item ,front =-1 ,rear =-1,maxsize,i;
void qdelete();
void qinsert();
void qdisplay();

void main(){
  int n;
  char ch;
  // clrscr();
  printf("Enter the size of a queue ");
  scanf("%d",&maxsize);

  do{
    // clrscr();
    printf("\n 1 for insertion :");
    printf("\n 2 for Delition :");
    printf("\n 3 for display :");
    printf("\n 4 for exit :");

    printf("\nEnter your choice : ");
    scanf("%d",&n);
  

  switch(n){
    case 1:
    qinsert();
    break;
    case 2:
    qdelete();
    break;

    case 3:
    qdisplay();
    break;

    case 4:
    exit;
    

    
  }
   printf("\nDo you want to Continue : ");
  fflush(stdin);
  scanf("%c",&ch);
  }while(ch == 'y'|| ch =='Y');
}

void qinsert(){
  if( rear == maxsize-1)
  {
    printf("Queue is full!");
    getch();
    return;
  }
  else if(front == -1){
    front =0 ,rear =0;
  }
  else{
    rear =rear+1;
  }
  printf("Enter the element to be inserted : ");
  scanf("%d",&item);
  queue[rear]=item;
}

void qdelete(){
  if(front == -1)
  {
    printf("Queue is empty!");
    getch();
    return;
  }
  item =queue[front];
  printf("\n the deleted iteam in queue is : %d",item);
  if(front == rear){
    front =-1 ,rear =-1;
  }
  else{
    front =front +1;
  }
}

void qdisplay(){
  if(front == -1){
    printf("\n their is no elements present in the queue to display : ");
  }
  for(i=front;i<=rear;i++){
    printf("%d ",queue[i]);
  }
}
