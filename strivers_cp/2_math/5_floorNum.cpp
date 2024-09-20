//https://codeforces.com/problemset/problem/1426/A
#include<iostream>
#define ip(a, b) cin>>a>>b;
using namespace std;


int main(){
    int t; cin >>t;
    while(t--){
        int n, x; ip(n, x);
        if(n <= 2)
            cout << 1 << endl;
        else{   
            int k = ((n-3)/x);
            cout << (k+2) << endl;
        }
    }
    return 0;
}
