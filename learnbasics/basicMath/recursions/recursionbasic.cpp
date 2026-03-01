#include <bits/stdc++.h>
using namespace std;
//Printing name
void PrintName(string name,int count,int n){
   if(count == n)
   return;

   cout<<name<<" ";
   count++;
   PrintName(name,count,n);
}
//Printing Number till N
void PrintNum(int start,int n){
    if(start>n) return ;
    cout<<" "<<start;
    start++;
    PrintNum(start,n);  
}
int main (){
    // PrintName("Abdul Rehman",0,3);
    PrintNum(1,4);


    return 0;
}