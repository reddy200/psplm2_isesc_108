#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant;
    printf("enter a in the equation ax^2+bx+c: \n");
    printf("enter b in the equation ax^2+bx+c: \n");
    printf("enter c in the equation ax^2+bx+c: \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    discriminant=b*b-4*a*c;
    if (discriminant>0)
    {
        float r1,r2;
        printf("the roots are real and distint \n");
        r1=(-b+sqrt(discriminant))/2*a;
        r2=(-b-sqrt(discriminant))/2*a;
        printf("the roots are r1=%f and r2=%f",r1, r2);
    }
    else if(discriminant==0)
    {
        float r1;
        printf("the roots are equal and distint \n");
        r1=(-b)/2*a;
        printf("the roots are r1=%f and r2=%f", r1, r1);
    }
    else
    {
      float e,f ;
       printf("the roots are complex \n");
       e=(-b)/2*a;
       f=(sqrt(-1*(discriminant)))/(2*a); 
       printf("the roots r1=%f+i%f and r2=%f-i%f",e,f,e,f);
    }

    return 0;
}
