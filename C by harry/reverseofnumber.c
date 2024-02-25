#include<stdio.h>

int main()
{
int n,q,r,temp,i;
printf("Enter\n");
scanf("%d",&n);
temp=0;
for(i=0;n!=0;i++)
{
r=n%10;
n=n/10;
temp=temp*10+r;
}
printf("%d",temp);






return 0;
}