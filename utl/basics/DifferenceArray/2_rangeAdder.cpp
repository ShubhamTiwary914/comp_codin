#include<iostream>
#include<bits/stdc++.h>
#define loop(n, body) for(int i=0;i<n; i++) body
#define ull long long
using namespace std;


int main(){
    int n, m; cin >> n >> m;
    unordered_map<int, int> summ;

    int l, r, k;
    loop(m, {
        cin >> l >> r >> k;
        summ[l] += k;
        summ[(r+1)] -= k;
    })
    int res = 0;
    ull prev = 0, curr = 0;

    loop(n, {
        curr = prev;
        curr += summ[(i+1)];
        prev = curr;
        if(curr>=res)
            res = curr;
    })
    cout << res << endl;
    return 0;
}