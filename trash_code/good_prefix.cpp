#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long int x,k;
        cin>>x>>k;
        if(pow(2,k)>=x)
        cout<<"1"<<endl;
        else
       cout<<"0"<<endl;
        
    }
return 0;
    
}