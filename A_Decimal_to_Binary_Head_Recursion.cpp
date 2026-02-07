#include<bits/stdc++.h>
#define ll long long
using namespace std;
void decToBinary(ll n,string &bin){
    if(n==0) return;
    decToBinary(n/2,bin);
    bin.push_back(n%2+'0');
}
int main(){
    ll n; cin>>n;
    if(n==0) cout<<"0"<<'\n';
    else{
        string bin="";
        decToBinary(n,bin);
        cout<<bin<<'\n';
    }
   return 0;
}