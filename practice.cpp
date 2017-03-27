#include<stdio.h>
#define MOD 1000000007
typedef unsigned  long long int ll;
int main()
{
int j,k,t;
ll sum,i,n,a,b,x,y;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);

sum=0;
for(i=1;i*i<=n;i++)
{
sum=(sum+(i*(n/i)))%MOD;
a=n/(i+1);
b=n/i;
if(a+1<=i)
break;
b=(b*(b+1)/2)%MOD;
a=(a*(a+1)/2)%MOD;
sum=(sum+(((b-a+2*MOD)%MOD)*i)%MOD)%MOD;
}
printf("%lld\n",sum);

}
return 0;
}
