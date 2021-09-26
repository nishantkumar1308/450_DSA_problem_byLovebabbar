//cyclically rotate array by one
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   int curr,prev;
   curr=arr[0];
   prev=arr[0];
   for(int i=0;i<n-1;i++)
   {
      curr=arr[i+1];
      arr[i+1]=prev;
      prev=curr;

   }
   arr[0]=prev;
   
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
}
