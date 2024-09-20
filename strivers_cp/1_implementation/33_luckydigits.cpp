//https://codeforces.com/problemset/problem/109/A
#include<iostream>
#define ip(x) cin >> x;
#define op(n, ch) for(int i=0; i<n; i++) cout << ch;
#define ll long long
using namespace std;


bool solve(){
    int n; ip(n);
    int i = 1;
    while(4*i <= n){
        int j = i;
        while(j >= 0){
            int k = abs(i - j);
            ll res = (4*j) + (7*k);
            if(res == n){
                op(j, '4');
                op(k, '7');
                return true;
            }
            j--;
        }
        i++;
    }
    return false;
}



int main(){
    bool found = solve();
    if(!found)
        cout << -1;
    return 0;
}