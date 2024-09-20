#include<iostream>
#define ip(x, y) cin >> x >> y;
using namespace std;



int main(){
    int n, k;
    ip(n, k);

    int res = 0;
    while(k >= n){
        k *=2;
        n*=3;
        res++;
    }
    cout << res;
    return 0;
}