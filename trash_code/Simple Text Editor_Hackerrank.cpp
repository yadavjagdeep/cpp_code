#include<iostream>
#include<stack>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
  int q;cin>>q;
  string str;
  stack<int>s;
  stack<string>s1;
  stack<string>s2;
  while (q--) {
    int n;cin>>n;

    if(n==1)
    {
      string st;cin>>st;
      s1.push(st);
      str+=st;
      s.push(1);
    }
    else if(n==2)
    {
      int m;cin>>m;
      int start = str.length()-m;
      string p = str.substr(start,start+m);
      s2.push(p);
      str=str.substr(0,str.length()-m);
      s.push(2);
    }
    else if(n==3)
    {
      int k;cin>>k;
      cout<<str[k-1]<<endl;
    }
    else if(n==4)
    {
      int val=s.top();
      s.pop();
      if(val==1)
      {
        string p = s1.top();
        s1.pop();
        int k = p.length();
        str = str.substr(0,str.length()-k);
      }
      else if(val==2)
      {
        string p = s2.top();
        s2.pop();
        str+=p;
      }
    }

  }
return 0;
}
