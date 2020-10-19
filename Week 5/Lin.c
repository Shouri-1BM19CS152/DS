#include<stdio.h>#include<stdlib.h>
#define QUE_SIZE 5
int item,front=0,rear=-1,q[10];
void insertrear(){
    if(rear==QUE_SIZE-1){
        printf("queue overflow\n");
        return;}
    printf("Enter the ITEM to be Inserted\n");
    scanf("%d",&item);
    rear=rear+1;
    q[rear]=item;
}
void deletefront(){
    if (front>rear){
        front=0;
        rear=-1;
        printf("QUEUE is EMPTY\n");}
    printf("The item deleted is %d",q[front++]);}
void display(){
    int i;if (front>rear){	
        printf("Queue is Empty\n");}
        else{ 
            printf("Contents of queue\n");
            for(i=front;i<=rear;i++){
                printf("%d\t",q[i]);}}
}
int main(){	
    int choice;
    for(;;)	{
        printf("\n Enter the choice of Operation \n 1:Insert_Rear \n2:Delete_Front \n3:display\n4:Exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:insertrear();break;
            case 2:deletefront();break;
            case 3:display();break;
            default:exit (0);
		}
	}}
