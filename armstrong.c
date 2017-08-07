#include<stdio.h>
int main()
{
int rem,res=0,n,temp;
printf("enter the number:");
scanf("%d",&n);
temp=n;
while(temp!==0)
{
rem=temp%10;
res=res+(rem*rem*rem);
temp=temp/10;
}
if(res==n)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}

