#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
for(int i=2;i<=n;i++){
    if(i^n)
    printf("%d",i);
}
    return 0;
}
