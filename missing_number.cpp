/*
 solved by : Bashir Ahmed Sharjid
 22/8/2022
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    long int n,sum1=0,sum2=0;
    cin>>n;

   long int arr[n];

    for (int i = 1; i < n; ++i) {
        cin>>arr[i];
    }
    for (int i = 1; i <= n; ++i) {
        sum1+=i;
    }
    for (int i = 1; i < n; ++i) {
        sum2+=arr[i];
    }
    cout<<sum1-sum2<<endl;
    return 0;
}
