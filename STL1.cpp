#include <bits/stdc++.h>
#include <string>
using namespace std;







int main()
{


    int arr[10]={9,2,1,5,3,4,8,7,6,0};

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
//now we can use iterator to access elements of vector and even use it for others like deque, stack, queue, priority queue, set, multiset, unordered set, map, multimap etc. because all these data structures have iterators and we can use iterators to access elements of these data structures

//we just need to declare iterator of that particular data structure and then use it to access elements of that data structure

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



//deque
deque<int> d;

//adds element to the back of deque
d.push_back(1);

//adds element to the front of deque
d.push_front(2);

//removes element from the back of deque
d.pop_back();

//removes element from the front of deque
d.pop_front();

//prints full deque
for(auto it:d)
{
    cout<<it<<" "<<"deque element"<<endl;
}





//stack
stack<int> s;


//adds element to the top of stack
s.push(1);

//removes element from the top of stack
s.pop();

//prints top element of stack
cout<<s.top()<<" "<<"top element of stack"<<endl;







//queue
queue<int> q;


//adds element to the back of queue
q.push(1);

//removes element from the front of queue
q.pop();

//prints front element of queue
cout<<q.front()<<" "<<"front element of queue"<<endl;







//priority queue
priority_queue<int> pq;

//adds element to the priority queue
pq.push(1);

//removes element from the priority queue
pq.pop();

//prints top element of priority queue
cout<<pq.top()<<" "<<"top element of priority queue"<<endl;






//set
set<int> st;
st.insert(10);
st.emplace(20);
st.insert (2);

//prints full set
for(auto it:st)
{
    cout<<it<<" "<<"set element"<<endl;
}
// sets do not allow duplicate elements
st.insert(10);

//prints full set
for(auto it:st)
{
    cout<<it<<" "<<"set element after inserting duplicate element"<<endl;
}
//outputs 2 10 20 because set does not allow duplicate elements and 10 is already present in set






//Multiset
multiset<int> mst;
mst.insert(10);
mst.insert(10);
mst.insert(20);

//prints full multiset
for(auto it:mst)
{
    cout<<it<<" "<<"multiset element"<<endl;
}

//outputs 10 10 20 because multiset allows duplicate elements and 10 is inserted twice in multiset


//unordered set
unordered_set<int> ust;
ust.insert(10);
ust.insert(20);
ust.insert(2);

//prints full unordered set
for(auto it:ust)
{
    cout<<it<<" "<<"unordered set element"<<endl;
}

//explain for(auto it:ust) how auto is working in this case






//map


map<int,int> mp;

mp.insert({2,3});
mp.emplace(4,5);
//mp[6]=7; //inserts key 6 with value 7 in map  
mp[6]=7; //updates value of key 6 to 7 in map   

//crazy way to insert element in map
mp[8]=9; //inserts key 8 with value 9 in map
mp[8]=10; //updates value of key 8 to 10 in map

//interview question: what will be the output of below code snippet
cout<<mp[8]<<" "<<"value of key 8 in map"<<endl; //outputs 10 because value of key 8 is updated to 10 in map


//prints full map
for(auto it:mp)
{
    cout<<it.first<<" "<<it.second<<" "<<"map element"<<endl;
}

//outputs 2 3 4 5 6 7 8 10 because map stores key value pairs and we have inserted key value pairs in map as (2,3),(4,5),(6,7),(8,10)

//explain for(auto it:mp) if i want to print only a particular range of map elements how can i do that using for(auto it:mp)
//we can use lower_bound and upper_bound functions of map to get the range of elements we
//want to print and then use for loop to print those elements
//example: print all elements of map with key greater than 4 and less than 8
for(auto it=mp.lower_bound(4);it!=mp.upper_bound(8);it++)
{
    cout<<it->first<<" "<<it->second<<" "<<"map element in range"<<endl;
}

//so auto it: mp  can only be used to iterate through all elements of map but if we want to iterate through a particular range of map elements we can use auto it=mp.lower_bound(key) and auto it=mp.upper_bound(key) to get the range of elements we want to iterate through and then use for loop to iterate through those elements








//multimap
multimap<int,int> mmp;
mmp.insert({2,3});
mmp.insert({2,4});
mmp.insert({4,5});
mmp.emplace(6,7);

//prints full multimap
for(auto it:mmp)
{
    cout<<it.first<<" "<<it.second<<" "<<"multimap element"<<endl;
}

//outputs 2 3 2 4 4 5 because multimap allows duplicate keys and we have inserted key value pairs in multimap as (2,3),(2,4),(4,5)

//only difference between map and multimap is that map does not allow duplicate keys but multimap allows duplicate keys and rest of the functionalities of map and multimap are same




//Sorting algorithm
sort(arr,arr+10); //sorts the array in ascending order
//prints sorted array
for(auto it:arr)
{
    cout<<it<<" "<<"sorted array element"<<endl;
}

//outputs 0 1 2 3 4 5 6 7 8 9 because sort function sorts the array in ascending order


sort(v.begin(),v.end()); //sorts the vector in ascending order
//prints sorted vector
for(auto it:v)
{
    cout<<it<<" "<<"sorted vector element"<<endl;
}
//outputs 1 2 3 4 5 6 7 8 9 because sort function sorts the vector in ascending order









sort(arr,arr+10);
//comp is not a built in function it is a user defined function which we have to define to sort the array in descending order
//comp function takes two integers as input and returns true if first integer is greater than second integer and false otherwise
//comp function is used as a comparator function in sort function to sort the array in descending order

int c=9;
int cnt=__builtin_popcount(c); //returns the number of set bits in binary representation of p
//why error on p and how to fix it
//error is because p is not defined in the scope of main function and we are trying to
cout<<cnt<<" "<<"number of set bits in binary representation of c"<<endl;
//outputs 2 because binary representation of 9 is 1001 which has 2 set bits

//cnt=32 when c=-1 because binary representation of -1 is 11111111 11111111 11111111 11111111 which has 32 set bits





int a=*max_element(arr,arr+10); //returns the maximum element in the array
cout<<a<<" "<<"maximum element in the array"<<endl;

int b=*min_element(arr,arr+10); //returns the minimum element in the array
cout<<b<<" "<<"minimum element in the array"<<endl;

int p=*lower_bound(arr,arr+10,5); //returns the first element in the array which is greater than or equal to 5



int q=*upper_bound(arr,arr+10,5); //returns the first element in the array which is greater than 5


//if i have arr with elements 1 2 3 4 5 6 7 8 9  and i want 4 and 6 respectively then i can use lower_bound and upper_bound functions of array to get the lower bound and upper bound of 5 in the array and then use those bounds to get the required elements from the array:

int x=*lower_bound(arr,arr+10,5); //returns the first element in the array which is greater than or equal to 5
cout<<x<<" "<<"lower bound of 5 in the array"<<endl;
int y=*upper_bound(arr,arr+10,5); //returns the first element in the array which is greater than 5
cout<<y<<" "<<"upper bound of 5 in the array"<<endl;

//to get element in array less than  5 we can use code :
int z=*(lower_bound(arr,arr+10,5)-1); //returns the first element in the array which is less than 5
cout<<z<<" "<<"element in array less than 5"<<endl;//outputs 4 because lower_bound function returns the first element in the array which is greater than or equal to 5 and we are subtracting 1 from that element to get the element which is less than 5 in the array







//string permutations


//permutaions of string "231" function explanation: next_permutation function takes a string as input and returns the next permutation of that string in lexicographical order. If there is no next permutation then it returns the first permutation of that string which is the smallest permutation of that string in lexicographical order.
//lets say  str s={"2,3,1"}; then next_permutation(s.begin(),s.end()) will return "2,1,3" which is the next permutation of "2,3,1" in lexicographical order and if we call next_permutation(s.begin(),s.end()) again then it will return "3,1,2" which is the next permutation of "2,1,3" in lexicographical order and if we call next_permutation(s.begin(),s.end()) again then it will return "3,2,1" which is the next permutation of "3,1,2" in lexicographical order and if we call next_permutation(s.begin(),s.end()) again then it will return "1,2,3" which is the first permutation of "3,2,1" in lexicographical order because there is no next permutation of "3,2,1" in lexicographical order.
//its used to generate all permutations of a string in lexicographical order by calling next_permutation function in a loop until we get the first permutation of the string again.
//it can be used  for generating all permutations of a string in lexicographical order and also for generating all permutations of a string in reverse lexicographical order by using prev_permutation function instead of next_permutation function.
string s="231";
do
{    cout<<s<<" "<<"permutation of string"<<endl;
}
while(next_permutation(s.begin(),s.end()));



    return 0;
}