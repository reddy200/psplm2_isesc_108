#include<stdio.h>
int addition(int a, int b)
{
    int s;
    s= a+b;
    return s;
}

int main()
{
    int a,b,s,x ;
    printf("enter two numbers to be added: ");
    scanf("%d %d", &a, &b);
    s= addition(a,b);
   x= printf("the sum is %d\n",s);
    printf("%d",x);
    return 0;
}
