#include<iostream>
#define ip(x) cin >> x;
#define ip2(x, y, z) cin >> x >> y >> z;
using namespace std;

int main(){
    int t; ip(t);
    while(t--){
        int a, b, n;
        ip2(a, b, n);

        int res = 0;
        while(a <= n && b <= n){
            if(a < b){
                a += b;
            }else{
                b += a;
            }
            res++;
        }
        cout << res << endl;
    }
}