#include<iostream>
#define ip(x) cin >> x;
using namespace std;

int main(){
    int n;
    ip(n);

    int prev, curr;
    int res=0, cons=0;
    for(int i=0; i<n; i++){
        cin >> curr;
        if(i == 0 || curr > prev)
            cons++;
        else
            cons = 1;
        res = max(res, cons);
        prev = curr;
    }
    cout << res;
    return 0;
}