#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    for(int test=0; test<t; test++){
        int n, m;
        cin >> n >> m;

        int res = INT_MIN;
        for(int i=2; i<= max(n, m); i++){
            int curr = (m/i)*n;
            res = max(res, curr);
        }

        cout << res << endl;
    }
    return 0;
}