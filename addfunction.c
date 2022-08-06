#include<stdio.h>
int input1()
{
    int a;
    printf("enter a numbers to be added:");
    scanf("%d",&a);
    return a;
}
int input2()
{   
    int b;
    printf("enter another number:");
    scanf("%d",&b);
    return b;
}
int addition(int x, int y)
{
    int s;
    s= x+y;
    return s;
}
void output(int a, int b, int s)
{
    printf("the sum of %d and %d is %d",a,b,s);
}
int main()
{
    int a,b,s;
    a=input1();
    b=input2();
    s= addition(a,b);
    output(a,b,s);
    return 0;
}
