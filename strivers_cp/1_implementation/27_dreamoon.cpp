#include<iostream>
#define ips(x, y) cin >> x >> y;
#define ll long long
using namespace std;

int solve(){
    int n, m;
    ips(n, m);

    int l = (n % 2 == 0) ? (n/2) : ((n+1)/2);
    int r = 2*l;
    while(l <= n){
        if(l % m == 0)
            return l;
        l++;
        r+=2;
    }
    return -1;
}


int main(){
    cout << solve();
}
