//List is doubly linked list in nature but vector is singly linked list that why it was very costly to push in front
//but the list we can easily insert at beginning
#include<bits/stdc++.h>
using namespace std;
void explain_list(){
    list<int> l;
    l.push_back(2); //this will insert 
    l.emplace_back(2); //this will insert 

    l.push_front(5);
    l.emplace_front(6);

    // rest functions are same as vector
    //insert ,begin ,end ,rbegin,rend,clear,size, swap

    
}
int main ()
{
    explain_list();
    return 0;
}