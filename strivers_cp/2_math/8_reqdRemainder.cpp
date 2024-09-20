//https://codeforces.com/problemset/problem/1374/A
#include<iostream>
#define ip(a, b, c) cin>>a>>b>>c;
#define ll unsigned long long
using namespace std;



int main(){
    int t; cin >> t;
    while(t--){
        ll x, y, n;
        ip(x, y, n);

        ll i = ((n-y)/x);
        ll k = (x*i) + y;
        cout << k << endl;
    }
    return 0;
}
