#include<bits/stdc++.h>
using namespace std;
int main ()
{
   vector<int>v1;
   v1.push_back(5);
     v1.push_back(3);
        v1.push_back(1);
           v1.push_back(2);
            


              cout<<"Before Sorting:"<<endl;
              for(int i=0;i<v1.size();i++)
              {
                cout<<v1[i]<<" ";
              }

     cout<<endl;

sort(v1.begin(),v1.end());// increasing order

     cout<<"After Sorting:"<<endl;
              for(int i=0;i<v1.size();i++)
              {
                cout<<v1[i]<<" ";
              }




 sort(v1.begin(),v1.begin()+3); // 0 index theke 3 index porjnto sort

 sort(v1.begin()+1,v1.begin()+3) //   5  1  3  2
   
      //       0 1 2 3 4 5 6
 vector<int>v={5,3,3,4,1,1,2}
 sort(v.begin()+1,v.begin()+5) //  1 3 3 4 1 2

///

 vector<int>v={5,3,3,4,1,1,2};
 sort(v.begin(),v.end(),greater<int>())
 for(auto u:v)
 cout<<u<<" ";     //  5 4 3 3 2 1 1
 cout<<endl; 

 // another way
 sort(v.rbegin(),v.rend()) // 5 4 3 3 2 1  1



}