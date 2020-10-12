#include <stdio.h>
int bin(int a[],int l,int h,int item);
int n;
int main()
{
    int a[100],val;
    printf("etner no of elements\n");
    scanf("%d",&n);
    printf("Enter elements in ascending order\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Etner no. to be searched\n");
    scanf("%d",&val);
    int ans=bin(a,0,n-1,val);
    if(ans==-1)
    printf("Not present");
    else
    printf("Present at %d",ans);
    
}
int bin(int a[],int l,int h,int item){
    int mid=(l+h)/2;
    if(a[mid]==item)
    return mid;
    else if(a[mid]>item)
    return bin(a,l,mid-1,item);
    else if(a[mid]<item)
    return bin(a,mid+1,h,item);
    else
    return -1;
}

