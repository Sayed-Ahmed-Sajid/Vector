#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n;
   vector<int>v;

   while(cin>>n)    // while(1) cin>>n
   {
    if(n==0) break;
    v.push_back(n);
   }

  cout<<v.size()<<endl;

  for(auto u:v)
  {
    cout<<u<<" "<<endl;
  }

  cout<<endl;


}