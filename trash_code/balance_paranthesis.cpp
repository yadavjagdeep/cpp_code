#include<bits/stdc++.h>
using namespace std;
typedef signed  long long int lli;
#define mod 1000000007

lli power(lli a, lli q){
	lli outcome=1;
	while(q>0){
		if(q&1){
			outcome=(outcome*a)%mod;
		}
		a=(a*a)%mod;
		q=q>>1;
	}
	return outcome;
}

int main() {
lli t;
cin>>t;
while(t>0)
{
lli n,a,i;
cin>>n>>a;
lli pro=0,sum=0;
for(i=1;i<=n;i++)
{

   pro=power(a,((2*i)-1));
   sum=((sum%mod)+(pro%mod))%mod;
   a=((a%mod)*(pro%mod))%mod;
}
cout<<sum<<endl;

    --t;

}
return 0;
}
