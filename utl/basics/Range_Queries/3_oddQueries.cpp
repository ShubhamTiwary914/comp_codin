#include<iostream>
#include<bits/stdtr1c++.h>
using namespace std;


int rangeSum(int pre[], int n, int l, int r){
    if((l-1) < 0)
        return pre[r];
    return pre[r] - pre[l-1];
}


bool isOddProd(int a, int b){
    if(a & 1 && b & 1)
        return true;
    return false;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        int pre[n];
        int ai;
        for(int i=0; i<n; i++){
            cin >> ai;
            pre[i] = !i ? ai : (pre[i-1] + ai); 
        }

        int ttl = pre[n-1];
        int l, r, k;
        while(q--){
            cin >> l >> r >> k;
            l--; r--; 
            int rmttl = ttl - (rangeSum(pre, n, l, r));
            bool oddProd = isOddProd(k, r-l+1);
            
            bool oddttl = rmttl & 1;
            if((oddProd && !oddttl) || (!oddProd && oddttl))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}