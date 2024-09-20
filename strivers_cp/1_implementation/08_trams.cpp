//https://codeforces.com/problemset/problem/116/A
#include<iostream>
#define ip(n) cin >> n;
#define ll long long
using namespace std;



int main(){
    int n;
    ip(n);

    ll curr = 0;
    ll res = 0;
    while(n--){
        int a, b;
        ip(a); ip(b);
        curr += (b - a);
        res = max(res, curr);
    }
    cout << res << endl;
    return 0;
}