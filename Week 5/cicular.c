#include <stdio.h>
#define s 5
int q[s];
int f=-1,r=-1;
void insert(){
    int num;
    printf("Enter no. to be added\n");
    scanf("%d",&num);
    if(f==0 && r==s-1){
        printf("Overflow\n");
    }
    else if(f==-1 && r==-1){
        f=0;r=0;
        q[r]=num;
    }
    else if(r=s-1 && f!=0){
        r=0;q[r]=num;
    }
    else{
        r++;q[r]=num;
    }
}
int delete(){
    int val;
    if(f==-1 &&r==-1){
        printf("Underflow\n");
        return -1;
    }
    val=q[r];
    if(f==r){
        f=-1;r=-1;
    }
    else{
        if(f=s-1) f=0;
        else f++;
    }
    return val;
}
void display(){
    int i;
    if(f==-1 && r==-1) printf("empty\n");
    else{
        if(f<r){
            for(i=f;i<s;i++){
                printf("%d\n",q[i]);
            }
        }
    }
}
int main(){
    int val,op;
    for(;;){
    printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&op);
    switch(op){
        case 1: insert(); break;
        case 2: delete(); break;
        case 3: display(); break;
        default: exit(0);
    }getch();
}}
