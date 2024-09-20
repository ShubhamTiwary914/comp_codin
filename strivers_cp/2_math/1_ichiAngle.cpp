//https://codeforces.com/problemset/problem/1337/A
#include<iostream>
#define ips(a,b,c,d) cin>>a>>b>>c>>d;
using namespace std;



int main(){
    int t; cin >> t;
    while(t--){
        int a, b, c, d; ips(a, b, c, d);
        cout << b << " " << c << " " << d << endl;
    }
    return 0;
}