//https://codeforces.com/problemset/problem/1371/A
#include<iostream>
#define ip(a) cin>>a;
using namespace std;


int ceiler(int n, int x){
    if(n % x == 0)
        return n/x;
    return (n/x)+1;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n; ip(n);
        int ends = ceiler(n, 2);
        cout << ends << endl;
    }
    return 0;
}
