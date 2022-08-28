/*
 solved by : Bashir Ahmed Sharjid
 28/8/2022
 */
#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define REP2(i,a,b) for (int i = a; i <= b; i+=2)
#define REPneg(i,a,b) for(int i=a; i > b; i--)
using namespace std;

int main(){
    ll n,fact = 0;
    cin>>n;
    /* trailing zeros depends on the multiple of 5,
    * sodivide the number 'n' until the number is less than 5 and add the result of division */
    while(n>=5){
        n/=5;
        fact+=n;
    }
    cout<<fact<<endl;
}
