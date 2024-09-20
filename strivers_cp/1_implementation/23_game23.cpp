#include<iostream>
#include<unordered_map>
#define ip(x, y) cin >> x >> y;
#define ll long long
using namespace std;


void solve(unordered_map<ll, bool> &store, int &res, ll curr, int step, int k){
    store[curr] = true;
    if(curr == k)
        res = step;
    if(res != -1)
        return;

    ll n2 = curr*2;
    ll n3 = curr*3;
    if(n2 <= k && !store.count(n2)){
        store[n2] = true;
        solve(store, res, n2, step+1, k); 
    }
    if(n3 <= k && !store.count(n3)){
        store[n3] = true;
        solve(store, res, n3, step+1, k); 
    }
}


int main(){
    unordered_map<ll, bool> store;
    int res = -1;

    int n, m;
    ip(n, m);

    solve(store, res, n, 0, m);
    cout << res;
    return 0;
}