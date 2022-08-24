/*
 solved by : Bashir Ahmed Sharjid
 24/8/2022
 */
#include<bits/stdc++.h>
typedef long long ll;
typedef long int li;
#define REP(i,a,b) for (int i = a; i < b; i++)

using namespace std;

int main(){
   li x,cnt=0;
   cin>>x;
   li arr[x];

    REP(i,0,x){
        cin>>arr[i];
    }

    REP(i,0,x){
        if (arr[i]>arr[i+1]) {
            cnt+=(arr[i]-arr[i+1]);
            arr[i+1] = arr[i+1] + (arr[i] - arr[i+1]);
        }
    }
    cout<<cnt<<endl;
}
