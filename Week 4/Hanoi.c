#include <stdio.h>
void mov(int m,char a,char b,char c);
int main()
{
    int n;
    printf("Enter no of disc to mov\n");
    scanf("%d",&n);
    printf("A:Source B:Spare C:Dest\n");
    mov(n,'A','B','C');
    return 0;
}
void mov(int n,char so, char sp, char de){
    if(n==1)
    printf("Mov from %c to %c\n ",so,de);
    else{
        mov(n-1,so,sp,de);
        mov(1,so,de,sp);
        mov(n-1,sp,de,so);
    }
}
    

