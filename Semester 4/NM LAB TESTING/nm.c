#include <stdio.h>
#include <math.h>
#define e 0.001
#define f(x) pow(x,2)-4*x-10
#define df(x) 2*x-4
int main(){
float x0,x1,x2,f0,f1,f2,df0;
int i=0;
printf("enter the value of x0:");
scanf("%f",&x0);
do
{
    f0=f(x0);
    df0=df(x0);
    f1=f(x1);
    x1=x0-(f0/df0);
    x0=x1;

    i++;
    printf("iteration=%d\t",i);
    printf("root=%f\t",x1);
    printf("function=%f\n",f1);
    
} while (fabs(f1)>e);
return 0;

}