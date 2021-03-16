#include<iostream>
using namespace std;
int main()
{
long int t;cin>>t;
while (t--) {
  long int n;cin>>n;
  long long int change = 0;
  int flag = 0;
  int a[n];
  if(n==1)
  {
    int x;cin>>x;
    if(x==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
  else if(n==2)
  {
    int x;cin>>x;
    int b;cin>>b;
    if(x==5 && b==10)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
  }
  else{
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
    //long int val;cin>>val;
    int val=a[i];
    if(change>=(val-5))
    {
      change -=(val-5);
      change +=5;
    }
    else
    {
      flag=1;
      break;
    }

  }
  if(flag==0)
  cout<<"YES"<<endl;
  else
  cout<<"NO"<<endl;
}
}
  return 0;
}
