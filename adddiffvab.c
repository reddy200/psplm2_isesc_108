#include<stdio.h>
int addition(int x, int y)
{
    int s;
    s= x+y;
    return s;
}

int main()
{
    int a,b,s;
    printf("enter two numbers to be added: ");
    scanf("%d %d", &a, &b);
    s= addition(a,b);
   printf("the sum of %d and %d is %d\n",a,b,s);
    
    return 0;
}
