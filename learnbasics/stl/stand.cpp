#include <bits/stdc++.h>
using namespace  std;

void explain_pair(){
    //storing pair 1,3 in p variable
    pair<int, int> p = {1,3}; //This is how we access a pair this is the only way to store a pair of values
    cout<<p.first<<" "<<p.second<<endl;//to acccess pair we can write this

    //Now this is for the 2 values what if we want to store 3 then we will use nested pair

    pair<int, pair<int ,int>> P = {1,{3,4}}; // this is like {_,{_}}

    cout<<P.first<<" "<<P.second.first<<" "<<P.second.second<<endl;

    //Now something interesting like we can treat pair like an array 
    //For example
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl; //this will print 4
}

void explain_vector(){
    vector<int
}
int main (){

    explain_pair();

    return 0;
}