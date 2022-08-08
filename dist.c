#include <stdio.h>
#include <math.h>

float input1()
{
    float a;
    printf("Enter the x coordinate of point 1(x1): ");
    scanf("%f",&a);
    return a;
}
float input2()
{
    float b;
    printf("Enter the y coordinate of point 1(y1): ");
    scanf("%f",&b);
    return b;
}
float input3()
{
    float c;
    printf("Enter the x coordinate of point 2(x2): ");
    scanf("%f",&c);
    return c;
}
float input4()
{
    float d;
    printf("Enter the y coordinate of point 2(y2): ");
    scanf("%f",&d);
    return d;
}
float distance(float a, float b, float c, float d )
{
    float dist;
    dist=sqrt(((c-a)*(c-a))+((d-b)*(d-b)));
    return dist;
}
void output(float a, float b, float c, float d, float dist )
{
    printf("The distance between points (%f,%f) and (%f,%f) is %f ",a, b, c, d, dist);
}

int main()
{
    float a,b,c,d,dist;
    a=input1();
    b=input2();
    c=input3();
    d=input4();
    dist=distance(a,b,c,d);
    output(a,b,c,d,dist);
    return 0;
}
