// array ke jemne print kore vector ke o same way te print kore

#include<bits/stdc++.h>
using namespace std;
int main ()
{
     vector<int>v;

     v.push_back(1);   //  v[0]
     v.push_back(2);   //  v[1]
     v.push_back(3);   //  v[2]
     v.push_back(4);   //  v[3]
     v.push_back(5);   //  v[4]

   //(no.1 way) 

     cout<<v[0]<<" ";
     cout<<v[1]<<" ";
     cout<<v[2]<<" ";
     cout<<v[3]<<" ";
     cout<<v[4]<<" ";
     cout<<endl;

     // ( no.2 way)
    // using (at function)

    cout<<v.at(0)<<" ";
    cout<<v.at(1)<<" ";
    cout<<v.at(2)<<endl;

    /*why we will use at function??
    ans:normally,if we print v[5] then its ans will be=0 or garbage value
                  if we print v[6] then its ans will be=0
                  bcz of out of range */

  /* but if we use at function and we print this values then it will be 
  given us some warning */
  // cout<<v.at(6);

  //  no 3 way ( using  for loop )

  for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }

  // no 4 way

    vector<int>v={1,2,3,4,5};
   
    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
  {
    cout<<v[i]<<" ";
  }



}