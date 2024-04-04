#include<bits/stdc++.h>
using namespace std;
int main ()
{
   vector<int>v;
   v.push_back(10);
   v.push_back(20);
   v.push_back(30);
   v.push_back(40);

   for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" ";
   }

  cout<<endl;


  // erase func and insert are similar
  //erase func je kono value delete korte pare
  // insert func je kono value add korte parbe.
   v.insert(v.begin(),1);// 1 dile 1,2 dile 2 add korbe
  
  for(int i=0;i<v.size();i++)
   {
    cout<<v[i]<<" "; // 1  10  20  30  40
   }
   cout<<endl;
  
   
// //    

  

  //  v.insert(v.begin()+1,1); // 10  1  20  30  40
  
  // for(int i=0;i<v.size();i++)
  //  {
  //   cout<<v[i]<<" ";
  //  }

//   cout<<endl;

  v.insert(v.begin(),3,1); //  1 1 1 10 20 30 40
  
   for(int i=0;i<v.size();i++)
   {
        cout<<v[i]<<" ";
         
   }

  cout<<endl;

// v.insert(v.begin()+2,3,1); // 10 20 1 1 1 30 40
  
//   for(int i=0;i<v.size();i++)
//    {
//     cout<<v[i]<<" ";
//    }

//   cout<<endl;


}