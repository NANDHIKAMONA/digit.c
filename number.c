#include<stdio.h>
#include<conio.h>
void main()
{
long long 0;
int count=0;
printf("enter a integer");
scanf("%11d",&n);
while(n!=0)
{
//n=n/10
n/=10;
++count;
}
printf("the integer is%d", count);
}

