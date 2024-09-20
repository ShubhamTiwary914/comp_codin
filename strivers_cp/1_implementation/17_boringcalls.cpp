#include<iostream>
#define ip(x) cin >> x;
using namespace std;


int main(){
    int n, x;
    ip(n);
    while(n--){
        ip(x);
        int d = x%10;
        string strx = to_string(x);
        int l = strx.length();

        int prevs = 10*(d-1);
        int curr = (l*(l+1))/2;
        cout << (prevs + curr) << endl;
    }
}