#include<iostream>
#define ip(x) cin >> x;
#define ll long long
using namespace std;


ll roundsum(ll a, ll b){
    if((a + b) % 2 == 0)
        return (a+b)/2;
    return ((a+b)/2)+1;
}



int main(){
    int t, n;
    ip(t);

    while(t--){
        ip(n);
        cout << 2 << endl;
        ll x = n-1, y=n;
        while(x >= 1){
            cout << x << " " << y << endl;
            y = roundsum(x, y);
            x--;
        }
    }
    return 0;
}