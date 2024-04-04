#include<bits/stdc++.h>
using namespace std;
int main ()
{
     vector<int>v;

     v.push_back(1);  //  v[0]
     v.push_back(2);  //  v[1]
     v.push_back(3);  //  v[2]
     v.push_back(4);  //  v[3]
     v.push_back(5);  //  v[4]

     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;

  v.erase(v.begin()+0);// first er sathe 0 add hobe and delete
  // here v.begin first value ke indicate kore its mean v[0]
  // first value or 1 will delete

     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;



     v.erase(v.begin()+1); // 2nd value or  2 will delete
      for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;



      v.erase(v.begin()+3); //  3 no index or 4 will delete
      for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;







      v.erase(v.begin()+2,v.end());// first er sathe 2 add hobe and delete
   // here v.begin first value ke indicate kore its mean v[0]
   // 2 no index theke end porjonto sob delete

     for(int i=0;i<v.size();i++)
     {
        cout<<v[i]<<" ";
     }
     cout<<endl;

     
   




}