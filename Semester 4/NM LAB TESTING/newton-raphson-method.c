#include <stdio.h>
#include <math.h>
#define f(x) pow(x,2)-3*x+2
#define df(x) 2*x-3
#define e 0.001
int main (){
  float x0,x1,f0,f1,df0;
  int i=0;
  printf("enter the value of x0:");
  scanf("%f",&x0);
do
{
  f0=f(x0);
    df0=df(x0);
  x1=x0-(f0/df0);
  f1=f(x1);
  x0=x1;
  i++;
  printf("no. of iteration=%d\t",i);
  printf("root=%f\t",x1);
  printf("f1=%f\n",f1);

} while (fabs(f1)>e);
  return 0;
}