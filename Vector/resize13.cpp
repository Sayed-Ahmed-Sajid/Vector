// resize will create indexes

#include<bits/stdc++.h>
using namespace std;
int main ()
{
   vector<int>v={2,3,4,5};

   v.resize(10);

   cout<<v.size()<<endl;

   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";  //   2 3 4 5 0 0 0 0 0 0
   }

   // push back diye na kore resize diyeo input
   vector<int>v;
   v.resize(10);

   int n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }

   cout<<v.size()<<endl;

   for(int i=0;i<n;i++)
   {
       cout<<v[i]<<" ";
   }




   // another way

   vector<int>v(10); 
   // print using for loop  // 0 0 0 0 0 0 0 0 0 0

   //

   vector<int>v(10,5); //   output= 5 5 5 5 5 5 5 5 5 5


}