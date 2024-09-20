#include<iostream>
#define ip(x) cin >> x;
#define ll long long
using namespace std;



int main(){
    ll n; ip(n);
    ll p=0, c=0;

    int i = 1;
    while(c < n){
        c += p + i;
        p = c;
        i++;
    }
    cout << i-1;
    return 0;
}