/*
 solved by : Bashir Ahmed Sharjid
 6/9/2022
 */
#include<bits/stdc++.h>
typedef long long ll;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define REP2(i,a,b) for (int i = a; i <= b; i+=2)
#define REPneg(i,a,b) for(int i=a; i > b; i--)
using namespace std;

int main(){
  ll t,x,cnt=0;
  cin>>t;
  ll arr[t];
    REP(i,0,t){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    REP(i,0,t){
        if (arr[i]!=arr[i+1]) cnt++;
    }
    cout<<cnt<<"\n";
}
