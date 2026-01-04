//Every thing in the set is unique and sorted secert that inside that a tree in maintained
#include<bits/stdc++.h>
using namespace std;
void explain_set(){
    set<int> s;
    s.insert(1); //(1)
    s.emplace(2);//(1,2)
    s.insert(2);//(1,2)  //not store same value
    s.insert(4);//(1,2,4)
    s.insert(3);//(1,2,3,4) //and it keep sorted everything

    //{1,2,3,4,5}
    auto it = s.find(3);

    //{1,2,3,4,5}
    auto it = s.find(6);

    s.erase(5);// erase 5 takes algorithmic time

    int cnt = s.count(1);

    //We can also erase with the help of iterator

    auto it1 = s.find(3);

    s.erase(it1);

}
int main()
{
    explain_set();
    return 0;
}