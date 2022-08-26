/*
 solved by : Bashir Ahmed Sharjid
 26/8/2022
 */
#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define REP2(i,a,b) for (int i = a; i <= b; i+=2)

using namespace std;

int main(){
    int x;
    cin>>x;

    if (x==2 || x==3) cout<<"NO SOLUTION"<<endl;
    else if (x==1) cout<<x<<endl;
    else{
        REP2(i,2,x){
            cout<<i<<" ";
        }
        REP2(i,1,x){
            cout<<i<<" ";
        }
        }
}
