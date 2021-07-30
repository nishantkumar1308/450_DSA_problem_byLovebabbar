#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  set<int>s;// for union we use set
  map<int,int>m1;
  for(int i=0;i<n;i++){
   cin>>a[i];
   s.insert(a[i]);
   m1[a[i]]++;
}
  for(int i=0;i<m;i++){
    cin>>b[i];
    s.insert(b[i]);
    m1[b[i]]++;
  }

  //union
  for(auto it:s)
  {
    cout<<it<<" ";
  }
  cout<<"\n";

//intersection
  for(auto it1:m1)
  {
   if((it1.second)>=2)
   {
      cout<<it1.first<<" ";
   }

  }
  
  
    


   
}
