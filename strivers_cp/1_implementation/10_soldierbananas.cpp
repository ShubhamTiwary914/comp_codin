#include<iostream>
#define ip(x, y, z) cin >> x >> y >> z;
#define ll long long
using namespace std;


int main(){
    int k, n, w;
    ip(k, n, w);

    ll ttl = k*((w*(w+1))/2);
    if(n >= ttl)
        cout << 0;
    else
        cout << abs(ttl - n);
    return 0;
}