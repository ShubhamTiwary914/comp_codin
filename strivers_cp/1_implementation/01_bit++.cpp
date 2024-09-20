//https://codeforces.com/problemset/problem/282/A
#include<iostream>
#define ip(n) cin >> n;
#define loop(n, b) for(int i=0; i<n; i++) b
#define op(n) cout << n;
using namespace std;


int main(){
    int n;
    ip(n);
    int res = 0;
    string op;
    loop(n, {
        ip(op);
        res = (res+1) ? (op == "++X" || op == "X++") : (res-1);
    })
    op(res);
    return 0;
} 
