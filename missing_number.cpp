#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    int a[n-1];
    ll sum =0;
    for(int i=0; i<n-1; i++){
        cin >> a[i];
        sum+=a[i];
    }
    // cout << sum << endl;

    ll sum1 = (n*(n+1))/2;

    ll res = sum1 - sum;
    cout << res << endl;
}