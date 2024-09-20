#include<iostream>
#include<bits/stdc++.h>
#define loop(n, body) for(int i=0;i<n; i++) body
#define ull long long
using namespace std;


int main(){
    int n; cin >> n;
    unordered_map<int,int> store;
    int maxi = 1;
    int l, r;
    loop(n, {
        cin >> l >> r;
        maxi = max(maxi, max(l, r));
        store[l]++;
        store[(r+1)]--;
    });

    ull res = 0;
    ull prev = 0, curr = 0;
    loop(maxi, {
        curr = prev;
        curr += store[(i+1)];
        res = max(res, curr);
        prev = curr;
    })
    cout << res;
    return 0;
}