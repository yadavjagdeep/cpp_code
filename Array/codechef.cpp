#include<bits/stdc++.h>
using namespace std;
bool is_valid(string str){
  int n=str.size();
if(str.size()%2!=0)
return false;
if(str[0]==')' || str[n-1]=='(')
return false;

return true;
}
int main(){
  int t;cin>>t;
  while(t--){
    string str;cin>>str;
    if(is_valid(str))
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';
  }
return 0;
}
