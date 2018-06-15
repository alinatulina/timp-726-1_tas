#include<stdio.h>

int main()

{
int n,a,b;
n=0;
a=0;
b=0;
scanf ("%d", &n);
do
{
scanf ("%d", &a);
if (a<=0)
b=b+1;
n=n-1;
}
while (n!=0);

printf("%d\n", b);

return 0;
}
