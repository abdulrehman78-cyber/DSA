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
//Reverse Number
int reverseNum(int n){
    int reversedNum = 0;
    for(int i = n;i>0;i = i/10){
        int last = i%10;
        reversedNum = (reversedNum * 10)  + last;
    }
    return reversedNum;
}
//Palindrome
bool is_Palin(int n){
    int reversedNum = 0;
    for(int i = n;i>0;i = i/10){
        int last = i%10;
        reversedNum = (reversedNum * 10)  + last;
    }
    if(n==reversedNum) return true;
    else return false;
}
//Armstrong
bool is_ArmStrong(int n ){
    if(n <= 0) return false;
    int arm = 0;
    int expo = countNum(n);
    int base = 0;
    for(int i = n;i>0;i = i/10){
        int multiple = 1;
        base = i%10;
        for(int j = 1;j<=expo;j++){
            multiple  = multiple * base;
        }
        arm = arm + multiple;
    }
    if (arm == n) return true;
    else return false; 
}
//Print All dividors
vector<int> getDivisor(int n){
    vector<int> res;
    // Brute force
    // if(n <= 0) cout<<"Invalid input!!"<<endl;
    // int divisor = 0;
    // for(int i = 1;i<=n;i++){
    //     if( n % i == 0 )
    //     res.push_back(i);
    // }
    // return res;

    //Optimal

    for(int i = 1;i*i <=n;i++){
        
        if(n%i == 0){
        res.push_back(i);

            if(i != n/i)
            res.push_back(n/i);
        }
    }
    sort(res.begin(),res.end());
    return res;
}
//Check weather it is prime or not
bool is_Prime(int n){
   
    for(int i = 2; i*i<=n;i++){
        if(n%i == 0 )
        {   
            return false;   
        }
        
    }
    return true;
}
//GCD/HCF
int gcd(int n1,int n2){
    // better approach
    // int gcd = 1;
    // for(int i = min(n1,n2);i>0;i--){
    //     if(n1%i==0 && n2%i==0){
    //         return  i;
    //     }
    // }
    // return 1;  
    
    // Optimal
    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if(n1 == 0) return n2;
    else return n1;
}


int main(){
    // cout<<countNum(12345);
    // cout<<reverseNum(12345);
    // cout<<is_Palin(123);
    // cout<<is_ArmStrong(153);
    // vector<int> result = getDivisor(36);
    // for (int val  : result){
    //     cout<<val<<" ";
    // }
    // cout<<is_Prime(7);
    cout<<gcd(20,15);



    return 0;
}