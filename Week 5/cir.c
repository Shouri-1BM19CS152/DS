#include<stdio.h>
#include<stdlib.h>
#define que_size 5
int item,front=0,rear=-1,q[que_size],count=0;
void insertrear(){
    if(count==que_size){
        printf("queue overflow\n");
        return;}
    printf("enter the element to be inserted\n");
    scanf("%d",&item);
    rear=(rear+1)%que_size;
    q[rear]=item;
    count++;}void deletefront(){
        if(count==0){
            printf("Queue is EMPTY\n");}
        else{
            item = q[front];
            printf("The ITEM deleted is = %d \n",item);
            front=(front+1)%que_size;
            count=count-1;}
}
void displayq(){
    int i,f;
    if(count==0){
        printf("Queue is Empty\n");
        return;}
    f=front;
    printf("ITEMS of Queue \n");
    for(i=0;i<=count;i++){
        printf("%d\t",q[f]);
        f=(f+1)%que_size;}}
int main(){	
    int choice;
    for(;;){
        printf("\n Enter the choice of Operation \n1.INSERT REAR \n2.DELETE FRONT \n3.DISPLAY \n4.EXIT \n ");
        scanf("%d",&choice);
        switch(choice){
            case 1:insertrear();break;
            case 2:deletefront();break;
            case 3:displayq();break;
            default:exit(0);}}}
