#include<iostream>
#define ip(a, b) cin >> a >> b;
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a, b;
        ip(a, b);

        swap(a[0], b[0]);
        cout << a << " " << b << endl;
    }
    return 0;
}