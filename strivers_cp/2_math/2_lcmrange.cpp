//https://codeforces.com/problemset/problem/1337/A
#include<iostream>
#include<math.h>
#define ips(a,b) cin>>a>>b;
#define ll unsigned long long
using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        ll l, r; ips(l, r);
        ll l2 = 2*l;
        if(l2 >= l && l2 <= r)
            cout << l << " " << l2;
        else
            cout << -1 << " " << -1;
        cout << endl;
    }
    return 0;
}