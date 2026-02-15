#include <bits/stdc++.h>
using namespace std;
int main()
{

    // pair
pair<int,int> p{2,3};
cout<<p.first<<" "<<"first element of pair"<<endl;
cout<<p.second<<" "<<"second element of pair"<<endl;
   


    // vector
vector<int> v;

v.push_back(1);
v.emplace_back(2);
vector<int> v1{v};

vector<int>::iterator it=v.begin();
for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*it<<" "<<"vector element"<<endl;

}


for(auto it:v)
{
    cout<<it<<" "<<"vector element using range based for loop"<<endl;
}


return 0;




}