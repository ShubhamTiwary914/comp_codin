#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll a, ll b, ll x){
    return abs((a^x)-(b^x));
}



int main(){
    int t; cin >> t;
    for(int test=0; test<t; test++){
        ll a, b, n;
        cin >> a >> b >> n;
        ll l = 0, r = n;
        ll res = LLONG_MAX;
        while(l<=r){
            ll m = l + (r-l)/2;
            ll curr = calc(a, b, m);
            ll prev = calc(a, b, m+1);
            ll next = calc(a, b, m-1);

            if(curr<= res)
                res = curr;
            if(prev < res)  
                r = m-1;
            else
                l = m+1;
        }
        cout << res << endl;
    }
    return 0;
}