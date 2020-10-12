#include <stdio.h>
int fact(n);
int main()
{
    int n,val;
    printf("enter no,\n");
    scanf("%d",&n);
    val=fact(n);
    printf("factorial is %d",val);
    
}
int fact(n){
    if(n==1){
        return 1;
    }
    else{
        return(n*fact(n-1));
    }
}
