#include<iostream>
#include<bits/stdtr1c++.h>
#define ll long long
#define umap unordered_map<int, ll> 
using namespace std;


ll solve(ll n, int k){
    umap store;

    ll c = 0;
    unsigned int right = 0;
    unsigned int left = 0;

    for(ll i=1; i<=sqrt(n); i++){
        if(n % i == 0){
            c++;
            left++;
            //cout << i << endl;
            if(left == k)
                return i;
            if(i != (n/i)){
                //cout << (n/i) << endl;
                store[++right] = (n/i);
                c++;
            }
        }
    }
    //cout << c << endl;

    if(k > c)
        return -1;
    return store[c - k + 1];
}



int main(){
    ll n, k;
    cin >> n >> k;
    cout << solve(n, k);

    return 0;
}