#include<iostream>
#define ip(x, y) cin >> x >> y;
using namespace std;



int main(){
    int n, k;
    ip(n, k);

    while(k--){
        int last = n%10;
        if(last == 0)
            n = n/10;
        else
            n--;
    }
    cout << n;
    return 0;
}