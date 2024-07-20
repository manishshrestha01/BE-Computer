#include <stdio.h>
#include <math.h>
#define f(x) pow(x,2)-4*x-10
#define e 0.001
int main (){
    float x0,x1,x2,f0,f1,f2,f3;
    int i=0;
    printf("Enter the value of x0 and x1:");
    scanf("%f %f",&x0,&x1);
    do
    {
        f0=f(x0);
        f1=f(x1);
        x2=(x0+x1)/2;
        f2=f(x2);
        f3=(x1-x0)/x1;
        if (f0*f2<0)
        {
            x1=x2;
        }
        else{
            x0=x2;
        }
        i++;
        printf("no. of iteration=%d\t",i);
        printf("root=%f\t",x2);
        printf("f2=%f\t",f2);
        printf("f3=%f\n",f3);
        
    } while (fabs(f2)>e);
    return 0;
}