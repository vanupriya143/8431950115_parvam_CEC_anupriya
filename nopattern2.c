#include<stdio.h>
int main()
{
    int n=0,i,j;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
             printf("%d ",j+1);
        }
        printf("%d\n");
    }
    return 0;

}