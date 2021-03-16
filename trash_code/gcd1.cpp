#include<iostream>
#include<vector>
#include<cmath>
#include<unordered_map>
#include<stdbool.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;cin>>t;
    while (t--)
    {
      ll n;cin>>n;
      vector<ll>v;
      for(ll i=0;i<n;i++){
       ll x;cin>>x;
       v.push_back(x);
      }
      unordered_map<ll,ll>umap;
      for(auto x:v)
      {
          umap[x]++;
      }
      
     bool check=true;
     while (check)
     {
         check=false;
         for(auto x:umap){
             if(x.second >1){
                 umap[x.first]=x.second-2;
                 umap[x.first+1]++;
             }
         }

         for(auto x:umap){
        //if(x.second>max)
       // max=x.second;
       cout<<x.first<<" "<<x.second<<endl;
    }
     }
    ll max=-1;
    
   // cout<<max<<endl;
    }
   return 0; 
}