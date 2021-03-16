#include<bits/stdc++.h>
using namespace std;
int solve(string str){
  unordered_map<char,bool>umap;
  int i=0,j=0;
  int win=0,ans=0;
  while (j<str.size()) {
     char c = str[j];
     if(umap.find(c)==umap.end()){
       umap.insert({c,true});
       j++;
       ans = max(ans,j-i);
     }else{
       umap.erase(str[i]);
       i++;
     }
    }
  //  win = j-i;
  //  win+=1;
  //cout<<win<<endl;
    //ans = max(ans,win);
return ans;
}
int main(){
  int t;cin>>t;
  while (t--) {
    string str;cin>>str;
    cout<<solve(str)<<endl;
  }
return 0;
}
