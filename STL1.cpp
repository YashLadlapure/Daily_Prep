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

    //end is after the last element of vector
v.erase(v.begin(),v.end());



    //inserts 2 elements of value 4 at position 1
v.insert(v.begin()+1,2,4);


//removes the last element of vector
v.pop_back();   


// clears the vector
v.clear();




//Takes input from user and adds to vector
int n;
cout<<"Enter number of elements to add to vector: "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}

//prints full vector
for(auto it:v)
{
    cout<<it<<" "<<"vector element after inserting 4 and popping last element"<<endl;
}










return 0;





}