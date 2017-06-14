#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double _pow(double val, int n)
{
if(!n)
return (double)1;
else if(n < 0)
return 1/pow(val, abs(n));
return val*pow(val, n-1);
}

int main()
{
double val;
int n;
printf("Input value: ");
scanf("%lf", &val);
printf("Input expo: ");
scanf("%d", &n);
printf("Result %f\n", pow(val, n));
getchar();
return 0;
}