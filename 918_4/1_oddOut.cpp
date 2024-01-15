//https://codeforces.com/contest/1915/problem/A
#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b)
            cout << c;
        else if(b == c)
            cout << a;
        else
            cout << b;
        cout << endl;
    }
    return 0;
}