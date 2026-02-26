//It stores in key value pair remember key is always unique but values can be same
#include<bits/stdc++.h>
using namespace std;
void explainMap(){
    map <int,int> mpp;
    map <int,pair<int , int>>mpp;
    map <pair<int,int>,int>mpp;
    
    mpp[1] = 2; //So here 1 is the key and 2 will be the value
    mpp.emplace(3,4);
    mpp.insert(2,4);

    map<int,int>::iterator it;
    
    for (auto it : mpp){
        cout<<it.first<< " " <<it.second <<endl;
    }

    cout<< mpp[1];
    cout<< mpp[5];

    auto it = mpp.find(3);

}
//Multimap
void explainMultiMap(){
    //every thing is similar but this time keys can be duplicate but also sorted
}
//Unordered Multimap
void explainUnorderMap(){
    // (Unsorted) 
    // Sorting: These are not sorted. They use a hash table to store data, meaning the order of elements is not guaranteed.
    // Performance: Generally faster than sorted maps, with an average 
    //  time complexity for operations.
}
int main (){
    explainMap();
    return 0;
}