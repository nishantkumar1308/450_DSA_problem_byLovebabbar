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
	sort(v.begin(),v.end());

	cout<<"If YOU WANT TO FIND SMALLEST ENTER 1 OR IF YOU WANT GRETEST ENTER 2"<<endl;
	int i;
	cin>>i;
	int val;
	cin>>val;

	if(i==1)//smallest
	{
		cout<<v[val-1];
	}
	else//kth largest
	{
		cout<<v[n-1-(val-1)];


	}
	// for kth smallest
}