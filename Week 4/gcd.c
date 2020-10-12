#include <stdio.h>
int gcd(int x,int y);
int main()
{
    int x,y;
    printf("Enter 2 no.\n");
    scanf("%d%d",&x,&y);
    int ans=gcd(x,y);
    printf("GCD is %d\n",ans);
}
int gcd(int x,int y){
int rem=x%y;
if(rem==0)
return y;
else
return gcd(y,rem);}
