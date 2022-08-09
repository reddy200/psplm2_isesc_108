#include <stdio.h>
#include <math.h>
float input1()
{
    float a;
    printf("Enter the value of a in ax^2+bx+c");
    scanf("%f",&a);
    return a;
}
float input2()
{
    float b;
    printf("Enter the value of b in ax^2+bx+c");
    scanf("%f",&b);
    return b;
}
float input3()
{
    float c;
    printf("Enter the value of c in ax^2+bx+c");
    scanf("%f",&c);
    return c;
}

float quadraticequation(float a, float b, float c)
{
    float eqn;
    eqn=b*b-4*a*c;
    return eqn;
}
float root1(float a, float b, float c, float eqn)
{
    float r1;
    r1=(-b+sqrt(eqn))/2*a;
    return r1;
}
float root2(float a, float b, float c, float eqn)
{
    float r2;
    r2=(-b-sqrt(eqn))/2*a;
    return r2;
}
float root3(float a, float b, float c, float eqn)
{
    float r3;
    r3=(-b)/2*a;
    return r3;
}
float root4(float a, float b, float c, float eqn)
{
    float r4;
    r4=(-b)/2*a;
    return r4;
}
float root5(float a, float b, float c, float eqn)
{
    float r5;
    r5=((-b)/2*a)+(sqrt(eqn))/2*a;
    return r5;
}
float root6(float a, float b, float c, float eqn)
{
    float r6;
    r6=((-b)/2*a)-(sqrt(eqn))/2*a;
    return r6;
}

void output(float a, float b, float c, float eqn, float r1,float r2, float r3, float r4, float r5, float r6)
{
    if (a==0)
    printf("invalid entry");
    
    else if(eqn>0)
    {
       printf("roots are real and distinct \n");
       printf("root 1=%f and root 2=%f",r1 ,r2);
    }
    else if(eqn==0)
    {
        printf("roots are real and equal \n");
        printf("root 1=%f and root 2=%f",r3 ,r4);
    }
    else 
    {
        printf("roots are distinct and imaginary \n");
        printf("root 1=%f and root 2=%f",r5,r6);
    }
}

int main()
{
    float a,b,c,eqn,r1,r2,r3,r4,r5,r6;
    a=input1();
    b=input2();
    c=input3();
    eqn=quadraticequation(a,b,c);
    output(a,b,c,eqn,r1,r2,r3,r4,r5,r6);
    return 0;
}
