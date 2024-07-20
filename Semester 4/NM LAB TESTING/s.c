#include <stdio.h>
#include <math.h>
#define f(x) pow(x,2)-4*x-10
#define e 0.001
int main(){
    float x0,x1,x2,f0,f1,f2;
    int i=0;
    printf("enter the value of x0 and x1");
    scanf("%f %f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=((f1*x0)-(f0*x1))/(f1-f0);
        f2=f(x2);
        f0=f1;
        f1=f2;
        x0=x1;
        x1=x2;
        i++;
        printf("iteration=%d\t",i);
        printf("x0=%f\t",x0);
        printf("x1=%f\t",x1);
        printf("root=%f\t",x2);
        printf("f2=%f\n",f2);
    } while (fabs(f2)>e);
    return 0;
}






//c=fb*a-Fa*b-fb-fa