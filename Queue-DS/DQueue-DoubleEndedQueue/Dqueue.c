#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int Dequeue[50] ,item ,front =-1 ,rear =-1,maxsize,i;
void fqdelete();
void rqdelete();
void fqinsert();
void rqinsert();
void deqdisplay();

void main(){
  int n;
  char ch;
  // clrscr();
  printf("Enter the size of a queue ");
  scanf("%d",&maxsize);

  do{
    // clrscr();
    printf("\n 1 for insertion for front end :");
    printf("\n 2 for insertion for rear end :");
    printf("\n 3 for Deleition from front end :");
    printf("\n 4 for Deleition from rear end :");
    printf("\n 5 for display :");

    printf("\nEnter your choice : ");
    scanf("%d",&n);
  

  switch(n){
    case 1:
    fqinsert();
    break;
    case 2:
    rqinsert();
    break;

    case 3:
    fqdelete();
    break;

    case 4:
    rqdelete();
    break;
    
  }
   printf("\nDo you want to Continue : ");
  fflush(stdin);
  scanf("%c",&ch);
  }while(ch == 'y'|| ch =='Y');
}

void fqinsert(){
  if(front ==0 && rear == maxsize -1 ){
    printf("Queue is full!");
    getch();
    return;
  }
  printf("Enter the element you want to insert : ");
  scanf("%d",&item);

  if(front == -1){
    front =0,rear =0;
    Dequeue[front] =item;
    return;
  }

  if(rear != maxsize-1 && front ==0){
    int c = rear+1;
    int k = rear+1;
    for(i =1;i<=c;i++){
      Dequeue[k] =Dequeue[k-1];
      k =k-1;
    }
    Dequeue[k] = item;
    front =k;
    rear = rear +1;
  }
  else{
    front = front-1;
    Dequeue[front] =item; 
  }
}
