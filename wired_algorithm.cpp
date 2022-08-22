/*
 solved by : Bashir Ahmed Sharjid
 21/8/2022
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n;
   cin>>n;
   cout<<n<<" ";
    while (n!=1)
   if(n%2==0){
       n/=2;
       cout<<n<<" ";
   } else if(n%2!=0){
       n=(n*3)+1;
       cout<<n<<" ";
   }
}
