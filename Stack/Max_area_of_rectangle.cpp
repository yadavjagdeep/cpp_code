/*
  n = 4, m = 4
 mat[][] ={{0 1 1 0},
          {1 1 1 1},
          {1 1 1 1},
          {1 1 0 0}}

   find the max area using continous 1's
   => I had broken down the problem to Area of histogram problem
   => Intially get the max area of array  {0 1 1 0}
   => Now added new elementd to previous elements to make building 
      array will now look something line {1 2 2 1}
   => Continued this process and find max area in each case
   => One point to be noticed is that whenever we encounter a 0
      then the hight of the building will be reduced to zero no
      matter what the previous hight was

   => 3'rd array will be as {2 3 3 2} and will yield max area of 8
   => last array will be as {3 4 0 0} and will yield area 6

*/



#include<bits/stdc++.h>
using namespace std;
std::vector<int> previous_smaller(std::vector<int> v){
	int n = v.size();
	stack<int>s;
	std::vector<int> PSE(n,-1);
	s.push(n-1);
	for(int i=n-2;i>=0;i--){
		if(s.empty())
			s.push(i);
		else if(v[i]>=v[s.top()])
			s.push(i);
		else{
			while(!s.empty() && v[i]<v[s.top()]){
				PSE[s.top()] = i;
				s.pop();
			}
			s.push(i);
		}
	}
return PSE;
}
std::vector<int> next_smaller(std::vector<int> v){
	int n = v.size();
	std::vector<int> NSE(n,n);
	stack<int>s;
	s.push(0);
	for(int i=1;i<n;i++){
		if(s.empty())
			s.push(i);
		else if(v[i]>=v[s.top()])
			s.push(i);
		else{
			while(!s.empty() && v[i]<v[s.top()]){
				NSE[s.top()]=i;
                s.pop();
			}
			s.push(i);
		}
	}
	return NSE;
}
int AREA(std::vector<int> v){
	int n = v.size();
	std::vector<int> NSE = next_smaller(v);
    std::vector<int> PSE = previous_smaller(v);
    int ans=INT_MIN;
	for(int i=0;i<n;i++){
	  int area = (NSE[i]-PSE[i]-1)*v[i];
	  ans = max(ans,area);
	}
return ans;
}
int main(){
	int n,m;
	cin>>n>>m;
	std::vector<std::vector<int>> mat;
	for(int i=0;i<n;i++){
		std::vector<int> row;
		for(int j=0;j<m;j++){
			int val;cin>>val;
			row.push_back(val);
		}
		mat.push_back(row);
	}
  
    int max_area=0;
    std::vector<int> v(m,0);
        for(int i=0;i<n;i++){
        	
        	for(int j=0;j<m;j++){
        		if(mat[i][j]==0)
        			v[j]=0;
        		else
        		v[j]+=mat[i][j];
             

        	}
        	/*for(auto x:v)
        		cout<<x<<" ";
        	cout<<'\n';*/
        	 int area = AREA(v);
        	 //cout<<area<<'\n';
        	 max_area = max(max_area,area);
        		 
        }
       cout<<max_area<<'\n';

return 0;

}