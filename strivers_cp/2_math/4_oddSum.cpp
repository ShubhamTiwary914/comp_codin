//https://codeforces.com/problemset/problem/1296/A
#include<iostream>
#define ip(a) cin>>a;
using namespace std;

int main(){
    int t; ip(t);
    while(t--){
        int n; ip(n);
        int x; 

        int ev = 0, od = 0;
        for(int i=0; i<n; i++){
            ip(x);
            if(x % 2 == 0)
                ev++;
            else
                od++;
        }

        if(od % 2 != 0){ //odd count is odd -> sum = odd
            cout << "YES\n";
        }
        else if(od == 0){
            cout << "NO\n";
        }
        else{ //if odd count is even -> try replace even as odd.
            if(ev > 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}