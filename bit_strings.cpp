#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long


// instead of writing mod u can use
// ((int)1e9+7)



int main(){
    ll n;
    cin >> n;
    ll ans =1;
    for(int i=0; i<n; i++){
        ans = (ans*2)%mod;
    }
    cout << ans << endl;
}