#include<iostream>
#define ip(x) cin >> x;
#define ll long long
using namespace std;

int main(){
    int n; ip(n);

    ll res = 0;
    for(int i=0; i<n; i++){
        if(i==0)
            res += n;
        else
            res += ((i+1)*(n-1-i)) + 1;
    }
    cout << res;
    return 0;
}