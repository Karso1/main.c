#include<stdio.h>
double f1(double x) {
    return x * x;
}
double f2(double x,double y)
{return x*y;};
double fun(int i,double x,double y)
{
    if(i==1)
        return f1(x);
    else
        return f2(x,y);
}
int main()
{
    double x1=5,x2=3,r;
    r = fun(1,x1,x2);
    r += fun(2,x1,x2);
    printf("\nx1 =%f,x2=%f,x1*x1+x1*x2=%f\n",x1,x2,r);
    return 0;
}