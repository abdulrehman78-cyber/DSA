//Vectors increase there size dynamically
#include <bits/stdc++.h>
using namespace std;
void explain_vector(){
    vector<int> v;  //It creates a empty container called v 

    v.push_back(1);    //Pushes element in our vector
    v.emplace_back(2);  //Exactly pushes but it is faster
 
    //We can also pair with vector
    vector<pair<int , int>>vec; //Vector of pair type

    vec.push_back({3,4});
    vec.emplace_back(6,7); //Here's the syntax difference 

    vector<int> v1(5,100); //this will create 5 instances of 100 like {100,100,100,100,100}
    vector<int> v2(v1); //WE can also copy of our container in some other vector
 
}

void explain_iterator(){
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    //Iterator is nothing but the point to the memory
    vector<int>::iterator it = vec.begin(); //now this will create a pointer name it which points at the begin of vector
    it++; //We can also do this now this will point to 1 index which contain 2
    cout<<*(it)<<" "; //2

    vector<int>::iterator it = vec.begin();  
    vector<int>::iterator it = vec.end(); //This will point at the end of the vector means if we want to get last element we write it--
    
    cout<<vec.back(); //this will point to the last element so this will give us 4

    //How to print a vector
    for(vector<int>::iterator it = vec.begin();it != vec.end(); it++){
        cout<<*(it)<<" ";
    }
    //Short way of doing that
    for(auto it = vec.begin();it != vec.end();it++){
        cout<<*(it)<<" ";
    }
    //Power of cpp we can do this in much shorter way
    for(auto it : vec){  //for each loop
        cout<<it<<" ";
    }

    //Deletion in a vector
    //(10 ,20,30,40)
    vec.erase(vec.begin()+1);  //this will delete 20
    vec.erase(vec.begin()+2,vec.begin()+4); //(10,40) (start,end)

    //insert
    vector<int> v = {2,100}; //this wil create {100 , 100}
    v.insert(v.begin()+1,300); //this will add {300 ,100,100}
    v.insert(v.begin()+1,2,5); // (5,5,300,100,100)

    cout<<v.size();
     
    v.pop_back();

    
}

int main (){
    explain_vector();
    explain_iterator();
    return 0;
}