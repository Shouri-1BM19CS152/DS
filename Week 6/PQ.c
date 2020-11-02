#include <stdio.h>
#include<stdlib.h>
#define n 5
int q[5][n];
int front[5]={0,0,0,0,0};
int rear[5]={0,0,0,0,0};
int item,pr;
void pqinsert(int pr){
    if(rear[pr]==n-1)
        printf("Overfloa\n");
    else{
        printf("Enter item\n");
        scanf("%d",&item);
        rear[pr]++;
        q[pr][rear[pr]]=item;;
    }
    return ;
}

void pqdel(){
    int i;
    for(i=0;i<3;i++){
    if(rear[i]==front[i] - 1)
        printf("Underflow\n");
    else{
        printf("Deleted %d \n",q[i][front[i+1]]);
        front[i]++;
        return;
        }
    }
}

void disp(){
    int i,j;
    for(i=0;i<3;i++){
        if(rear[i]==front[i] - 1)
            printf("Empty\n");
        else{
            printf("queue \n");
            for(j=front[i];j<rear[i];j++){
                printf("%d\n",q[i][j]);
            }
        }
    }return;
}

void main(){
    int ch;
    while(1){
        printf("1.PQ insert\n2.PQ delete\n3.disp\n4.exit\n ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("enter priority \n");
            scanf("%d",&pr);
            if(pr>0 && pr<4)
                pqinsert(pr-1);
            else printf("Only 3 pririties exist\n");
            break;
            case 2: pqdel();
            break;
            case 3: disp();
            break;
            case 4: exit(0);
        }
    }
}
