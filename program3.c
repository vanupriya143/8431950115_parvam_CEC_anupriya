/*program to check if given integer is positive or negative*/
#include<stdio.h>
int main()
{
    int i;
    printf("enter an integer");
    scanf("%d",&i);
    if(i>=0)
    {
        printf(" the given integer is positive\n",i);
    }
else
{
    printf(" the given integer is negative\n",i);
}
return 0;
}