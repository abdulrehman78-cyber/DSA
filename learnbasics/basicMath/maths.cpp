#include <bits/stdc++.h>
using namespace std;
int countNum(int n){
//Brute force
    // int count = 0;
    // while (n>0)
    // {
    //     n = n/10;
    //     count++;
    // }
    // int last = 0;
    // return count;

//Optimal
    int cnt = (int) log10(n)+1;
    return cnt;

}
int reverseNum(int n){
    int reversedNum = 0;
    for(int i = n;i>0;i = i/10){
        int last = i%10;
        reversedNum = (reversedNum * 10)  + last;
    }
    return reversedNum;
}
bool is_Palin(int n){
    int reversedNum = 0;
    for(int i = n;i>0;i = i/10){
        int last = i%10;
        reversedNum = (reversedNum * 10)  + last;
    }
    if(n==reversedNum) return true;
    else return false;
}
int main(){
    // cout<<countNum(12345);
    // cout<<reverseNum(12345);
    cout<<is_Palin(123);

    return 0;
}