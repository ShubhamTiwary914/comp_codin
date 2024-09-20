//https://codeforces.com/problemset/problem/1360/A
#include<iostream>
#define ips(a, b) cin>>a>>b;
#define ll unsigned long long
using namespace std;


int main(){
    int t; cin >>t;
    while(t--){
        int a, b; ips(a, b);
        ll x = (ll)max(a,b), y = (ll)min(a, b);

        ll grid = max(x, 2*y);
        cout << (ll)(grid*grid) << endl;
    }
}