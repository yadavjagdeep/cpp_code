#include<iostream>
#include<cstring>
#define ll long long int
using namespace std;
string rev(string str,string r){
  if(str.length()==1)
  return r;
return str[str.length()-1]+rev(str.substr(0,str.length()-2));
}
int main(){
  ll t;cin>>t;
  while(t--){
    ll n;cin>>n;
    string str = to_string(n);
    string r = NULL;
    cout<<rev(str,r)<<endl;
  }
return 0;
}
