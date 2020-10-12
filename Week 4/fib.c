#include <stdio.h>
int fib(int n);
int main()
{
    int n,val;
    printf("Enter no.of terms\n");
    scanf("%d",&n);
    printf("The sequence for %d no. is\n",n);
    for(int i=0;i<n;i++){
        val=fib(i);
        printf("%d\t",val);
    }
    return 0;
}
int fib(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fib(n-1)+fib(n-2));
}
