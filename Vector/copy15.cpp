#include<bits/stdc++.h>
using namespace std;
int main ()
{

  vector<int>v={2,3,4,5};
  vector<int>temp;

  temp=v;

  cout<<temp.size()<<endl;

  for(int i=0;i<temp.size();i++)
  {
     cout<<temp[i]<<" ";
  }
  cout<<endl;
 // main vector er value copy hoise just.dunota same thakbe
 cout<<v.size()<<endl;

  for(int i=0;i<v.size();i++)
  {
     cout<<v[i]<<" ";
  }

 






}