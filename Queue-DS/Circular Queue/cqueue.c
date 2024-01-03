#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int cqueue[50] ,item ,front =-1 ,rear =-1,maxsize,i;
void cqdelete();
void cqinsert();
void cqdisplay();

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

    printf("\nEnter your choice : ");
    scanf("%d",&n);
  

  switch(n){
    case 1:
    cqinsert();
    break;
    case 2:
    cqdelete();
    break;

    case 3:
    cqdisplay();
    break;

    
    

    
  }
   printf("\nDo you want to Continue : ");
  fflush(stdin);
  scanf("%c",&ch);
  }while(ch == 'y'|| ch =='Y');
}

void cqinsert(){
  if((front == 0 && rear == maxsize-1) || (rear+1 == front))
  {
    printf("Queue is full!");
    getch();
    return;
  }
  
  if(rear == maxsize-1){
    rear =0;
  }
  else{
    rear =rear+1;
  }
  printf("Enter the element to be inserted : ");
  scanf("%d",&item);
  cqueue[rear]=item;
  
   if(front == -1)
   {
    front =0;
   }

}

void cqdelete(){
  if(front == -1)
  {
    printf("Queue is empty!");
    getch();
    return;
  }
  item =cqueue[front];
  printf("\n the deleted iteam in queue is : %d",item);
  if(front == rear){
    front =-1 ,rear =-1;
  }
  else if(front == maxsize-1){
    front = 0;
  }
  else{
    front =front +1;
  }
}


