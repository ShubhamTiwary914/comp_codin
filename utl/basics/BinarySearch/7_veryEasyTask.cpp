#include<iostream>
#define ll long long
using namespace std;



int main(){
    int n, x, y;
    cin >> n >>x >>y;
    ll l=1, r = max(x, y) * n;
    ll res = r;

    while(l <= r){
        ll time = (l+r)/2;
        int tasks = ((time/x) + (time/y)) - 1;
        if(tasks >= n){
            res = time;
            r = time-1;
        }
        else
            l = time+1;
        //cout << "time: " << time << endl;
    }
    cout << res;
    return 0;
}