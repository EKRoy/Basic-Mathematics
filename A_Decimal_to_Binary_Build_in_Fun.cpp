#include<bits/stdc++.h>
#define ll long long
using namespace std;
string decToBinary(ll n){
    ll len=(int)(log2(n));  // msb
    // bitset<64>(n) binary representation
    // to_string() convert to string
    // substr() remove leading zero
    return bitset<64>(n).to_string().substr(64-len-1);
}
int main(){
    ll n; cin>>n;
    cout<<decToBinary(n)<<'\n';
   return 0;
}