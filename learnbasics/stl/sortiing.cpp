//Some mandatory Algorithms
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> p1,pair<int, int>p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}

void explain_STL_sort(){
    // sort(a,a+n);
    // sort (v.begin(),v.end());for vector
    //if we want only a specific part to sort then
    //sort (a+2,a+4);

    //If we want to store in decending order
    //sort(a,a+n,greater<int>);

    //if we want to sort in our own fashion
    //sort(a,a+n,comp) now what is comp ?? it is nothing but self comperator it is a  boolean function mention below

    pair<int ,int> a[] = {{1,2},{3,2}}; //now we will sort using comperator
    sort(a,a+2,comp);
    
}

void bin(){
    int num = 7; //we all know 7 have 111 in binary 
    int cnt = __builtin_popcount(num); //so it will return 3 as 3 bits are set

    long long Num = 18497950873947;
    int count = __builtin_popcountll(Num); 

    //okay for permutations
    string s = "123";
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    // if we want next max element then 
    // int maxi = *max_element(a,a+n);
}

int main(){
    explain_STL_sort();
    bin();
    return 0;
}