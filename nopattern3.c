#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
             printf("%d ",n-j);
        }
        printf("\n");
    }
    return 0;

}