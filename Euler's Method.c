/* Euler's Method */
#include <stdio.h>
#include <math.h>
float f1(float x,float y)
{ return(x+y); }
int main(void)
{
    int i;
    float x[100],y[100],h=0.2,r;
    x[0]=0.0;
    y[0]=0.0;
    i=0;
    printf(" x , y (error)\n");
    do {
        x[i+1]=x[i]+h;
        y[i+1]=y[i]+f1(x[i],y[i])*h;
        i++;
        r=exp(x[i])-x[i]-1;
        printf("%f, %f (%f)\n",x[i],y[i],r-y[i]);
    } while(x[i]<1.0);
}