#include<stdio.h>
#include<conio.h>
#define STACK_SIZE 5
int top=-1;
int s[10];
int item;
void push()
{
if(top==STACK_SIZE-1){
printf("Overflow\n");
return;}
top=top+1;
s[top]=item;}
int pop(){
if(top==-1)
reutrn -1;
return s[top--];}
void display(){
int i;
if(top==-1){
printf("Empty\n");
return;}
printf("Contents of stack\n");
for(i=top;i>=0;i--){
printf("%d\n",s[i]);}}
void main(){
int it_d,ch;
for(;;){
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
scanf("%d",&ch);
switch(ch){
case 1: printf("No. to insert \n");
scanf("%d",&item);
push();
break;
case 2: it_d=pop();
if(it_d==-1)
printf("empty\n");
else 
printf("Deleted\n");
break;
case 3: display();
break;
default: exit(0);
}}
getch();}

