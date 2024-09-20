//https://codeforces.com/problemset/problem/1294/A
#include<iostream>
#include<math.h>
#define ips(a, b, c, d) cin>>a>>b>>c>>d;
using namespace std;


int main(){
    int t; cin >> t;
    int n, a, b, c;
    while(t--){
        ips(a, b, c, n);
        int maxx = max(a, max(b, c));
        n -= (abs(maxx-a) + abs(maxx-b) + abs(maxx-c));
        if(n % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    
    return 0;
}
