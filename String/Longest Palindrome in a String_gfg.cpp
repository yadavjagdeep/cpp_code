#include<bits/stdc++.h>
using namespace std;
int dp[10001][10001];
int m;
string ans;
bool ispalindrome(string str,int i,int j){
  string s = str.substr(i,j);
  string s1 = s;
   reverse(s1.begin(),s1.end());
  if(s==s1)
  return true;
return false;
}
void lpss(string str,int i,int j){
  if(i>j)
  return ;
  else if(dp[i][j]!=-1)
  return;
  else if(ispalindrome(str,i,j)){
    if((j-i)>m){
      m=j-i;
      ans = str.substr(i,j);
      dp[i][j]=1;
      return;
    }
  }
  lpss(str,i+1,j);
  lpss(str,i,j-1);
}
int main(){
  int t;cin>>t;
  while (t--) {
    memset(dp,-1,sizeof(dp));
    m=INT_MIN;
    ans="";
    string str;cin>>str;
    lpss(str,0,str.size()-1);
    cout<<ans<<endl;
  }
return 0;
}
