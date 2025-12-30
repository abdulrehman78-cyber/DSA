#include<bits/stdc++.h>
using namespace std;
void print1(int num){
    for(int i = 0;i<num;i++)
    {
        for(int j = 0;j<num;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int num){
    for(int i = 0;i<num;i++){
        for(int j = 0 ;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int num){

    for(int i = 0;i<=num;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int num){
    for(int i = 1;i<=num;i++)
    {
        for(int j = 0;j<i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int num){
    for(int i = 0;i<num;i++){
        for(int j = 0; j<num - i ;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int num){
    for(int i = 0;i<num;i++){
        for(int j = 1; j<=num - i ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int num){
    for(int i = 0 ;i<=num;i++){
        //spaces
        for(int j = 0 ;j<num-i;j++){
            cout<<" ";
        }
        //stars
        for(int j = 0;j<(i*2)-1;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
void print8(int num){
    for(int i = 0 ;i<num;i++){
        //spaces
        for(int j = 0 ;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j = 1;j<=(2*num )-(2 * i + 1);j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
void print9(int num){
    for(int i = 0 ;i<=num;i++){
        //spaces
        for(int j = 0 ;j<num-i;j++){
            cout<<" ";
        }
        //stars
        for(int j = 0;j<(i*2)-1;j++){
            cout<<"*";
        }       

        cout<<endl;
    }

    for(int i = 0 ;i<num;i++){
        //spaces
        for(int j = 0 ;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j = 1;j<=(2*num )-(2 * i + 1);j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
void print10(int num){
    for(int i = 0;i<num;i++){
        for(int j = 0 ; j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0;i<=num;i++){
        for(int j = 0;j<num-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int num){

    for(int i = 0; i<num;i++){
        int start = 1;
        if(i%2 == 0) start = 1; else start = 0;
        for(int  j = 0;j<=i;j++){
            cout<<start<<" ";

            start = 1 -start ;
        }

        cout<<endl;
    }
}
void print12(int num){
    int space = (num*2)-2;
    for(int i = 1;i<=num;i++){

        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j = 1;j<=space;j++){
            cout<<" ";
        }
        for(int j = i;j>0;j--){
            cout<<j;
        }

        cout<<endl;
        space  = space -2;
    }
}
void print13(int num){
    int store = 1;
    for(int i = 1;i<=num;i++){       
        for(int  j = 1;j<=i;j++){
            cout<<store;
            store = store + 1;            
        }
        cout<<endl;
    }
}
void print14(int num){
    for(int i = 0;i<num;i++){
        for(char j = 'A';j<='A' + i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void print15(int num){
    for(int i = 0; i<num;i++){

        for(char ch = 'A';ch<'A'+(num-i);ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int num){
    for(int i= 0;i<num;i++){
        for(char ch = 'A';ch<i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print17(int num){
    for(int i = 0;i<num;i++){
        //spaces
        for(int j = 0; j<(num-i);j++)
        {
            cout<<" ";
        }
        //stars
        for(int j = 0;j<(2*i+1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int test;
    cin>>test;
    for(int i = 0;i<test;i++){
        int n; 
        cin>>n;
        print17(n);
    }

    return 0;
}