#include<bits/stdc++.h>
using namespace std;
int main ()
{
    vector<int>v;

    v.push_back(1); // v[0]
    v.push_back(2);// v[1]
    v.push_back(3); // v[2]
    v.push_back(4); // v[3]


  //declaring iterator

  vector<int> :: iterator it;

  it=v.begin();
  cout<<*it<<endl;   //   1


   vector<int>::iterator it;

  it=v.begin()+3;
  cout<<*it<<endl;   //   4

 // print using iterator

 for(it=v.begin();it!=v.end();it++)
 {
    cout<<*it<<endl;  //  1 2 3 4
 }

 /* v.begin = 0 no address
    v.end = last address
    address niye kaj kore iterator
 */
   
 // for each loop

    vector<int>v={2,3,4,5};

    for(int u:v)

    cout<<u<<" ";
    cout<<endl;


    //

     vector<int>v={2,3,4,5};

    for(auto u:v)  // automatically identify int/float/double

    cout<<u<<" ";
    cout<<endl;

   
}