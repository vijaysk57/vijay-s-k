#include<stdio.h>
int fib(int n){
if(n==0)
{
return 0;
}
else if(n==1)
{
return 1;
}
else
{
return fib(n-1)+fib(n-2);
}
}
void main()
{
int n,fibo;
printf("enter the value of n\n");
scanf("%d",&n);
fibo=fib(n);
printf("the fibnocci is %d",fibo);
}
