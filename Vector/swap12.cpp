#include<bits/stdc++.h>
using namespace std;
int main ()
{
   vector<int>v1;
   v1.push_back(10);
     v1.push_back(20);
        v1.push_back(30);

   vector<int>v2;
   v2.push_back(1);
      v2.push_back(2);
         v2.push_back(3);

         cout<<"before swapping:"<<endl;
         for(int i=0;i<v1.size();i++)
         {
           cout<<v1[i]<<" ";
         }
    
        cout<<endl;

         for(int i=0;i<v2.size();i++)
         {
           cout<<v2[i]<<" ";
         }
         cout<<endl;
    

  swap(v1,v2);
  
   cout<<"after swapping:"<<endl;
         for(int i=0;i<v1.size();i++)
         {
           cout<<v1[i]<<" ";
         }
    
        cout<<endl;

         for(int i=0;i<v2.size();i++)
         {
           cout<<v2[i]<<" ";
         }


    cout<<endl;
  
   





}
