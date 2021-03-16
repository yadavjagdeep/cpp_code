#include<bits/stdc++.h>
using namespace std;
void sieve(int n,vector<int>&prime,vector<int>&seg_prime){
bool mark[n+1];
memset(mark,true,sizeof(mark));
  mark[0]=false;
  mark[1]=false;
  for(int i=2;i*i<=n;i++){
    if(mark[i]==true){
      for(int j=i*i;j<=n;j+=i)
      mark[j]=false;
    }
  }
  for(int i=0;i<=n;i++){
    if(mark[i]==true){
      prime.push_back(i);
      seg_prime.push_back(i);
    }
  }
}

void segmented_sieve(int n,vector<int>&seg_prime){
  int limit = floor(sqrt(n));
  vector<int>prime;
  sieve(limit,prime,seg_prime);

  int low = limit;
  int high = 2*limit;

  while(low<n){
    if(high>=n)
    high=n;

    bool mark[limit+1];
    memset(mark,true,sizeof(mark));

    for(int i=0;i<prime.size();i++){
      int lo_lim = (low/prime[i])*prime[i];  //lo_min will find fist element in range 
                                             // which is multiple of primes[i]
      if(lo_lim<low)
      lo_lim+=prime[i];

      for(int j=lo_lim;j<high;j+=prime[i]){   
        mark[j-low]=false;                    // marking all in range as false which
      }                                       // are multiple of primes[i]
    }
    for(int i=low;i<high;i++){
      if(mark[i-low]==true){
        seg_prime.push_back(i);
      }
    }
    low+=limit;
    high+=limit;
  }


}
int main(){
  int n;cin>>n;
  std::vector<int> seg_prime;
  segmented_sieve(n,seg_prime);
  for(auto x:seg_prime)
  cout<<x<<" ";
return 0;
}
