#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//number of elememt in array
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	//maximum value in array
	int maxi=*max_element(v.begin(),v.end());
	//minimum element in array
	int mini=*min_element(v.begin(),v.end());
	cout<<maxi<<" "<<mini<<endl;

}