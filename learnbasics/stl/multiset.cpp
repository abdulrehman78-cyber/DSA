#include <bits/stdc++.h>
using namespace std;
void explain_multiset(){
    multiset<int> m;
    m.insert(5);
    m.emplace(7);
    m.emplace(8);
    m.emplace(8);

    

    auto it (m);

    for(auto it:m){
        cout<<" "<<it;
    }
}
int main(){

    explain_multiset();
    return 0;
}