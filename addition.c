#include<stdio.h>
int addition(int a, int b)
{
    int s;
    s= a+b;
    return s;
}

int main()
{
    int a,b,s ;
    printf("enter two numbers to be added: ");
    scanf("%d %d", &a, &b);
    s= addition(a,b);
    printf("the sum of %d and %d is %d",a,b,s);
    return 0;
}
