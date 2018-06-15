#include <math.h>
#include <stdio.h>

int main()

{
long int n,a,b,i,sum1;
n=0;
a=0;
b=0;
sum1=0;
scanf ("%ld", &n);
for(i=1; i<=n; i++)
{
scanf ("%ld", &a);
b=pow(a,2);
sum1=sum1+b;
}
printf("%ld\n", sum1);

return 0;


}
