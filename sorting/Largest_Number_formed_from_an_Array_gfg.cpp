#include<iostream>
#include<cstring>
#include<cstdbool>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(string s1,string s2){
  return (stoi(s1+s2)>stoi(s2+s1));

}

int main(){
  int t;cin>>t;
  while (t--) {
    int n;cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
      string str;cin>>str;
      v.push_back(str);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x:v)
    cout<<x;
    cout<<endl;
  }
return 0;
}
