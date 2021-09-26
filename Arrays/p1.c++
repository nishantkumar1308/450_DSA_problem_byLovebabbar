#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;//number of elememt in array
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
		cin>>arr[i];
	//reversing the array
	int var;
	for(int i=0;i<n;i++)
	{
		reverse(arr,arr+n);//stl reverse function
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

}