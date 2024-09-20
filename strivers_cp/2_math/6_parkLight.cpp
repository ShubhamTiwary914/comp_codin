//https://codeforces.com/problemset/problem/1358/A
#include<iostream>
#define ip(a, b) cin>>a>>b;
using namespace std;


int fill(int x){
    if(x % 2 == 0)
        return x/2;
    return -1;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n, m; ip(n, m);
        int x = max(n, m), y = min(n, m);

        int res = 0;
        if(x % 2 == 0){
            res += (fill(x) * y);
        }
        else{
            //fill x-1 * y
            res += (fill(x-1) * y);
            //then fill 1 * y
            if(y % 2 == 0)
                res += (fill(y));
            else
                res += (fill(y-1) + 1);
        }
        cout << res << endl;
    }
    return 0;
}
