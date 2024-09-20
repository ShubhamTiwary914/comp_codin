//https://codeforces.com/problemset/problem/1139/B
#include<iostream>
#define ip(x) cin >> x;
#define ips(arr, n) for(int i=0; i<n; i++) cin >> arr[i];
#define ll long long
using namespace std;



int main(){
    int n; ip(n);
    int arr[n]; ips(arr, n);

    ll res = 0;
    int i = n-1;

    int nx = -1, cr = arr[n-1];
    while(i>=0){
        if(nx == 0)
            break;
        if(nx == -1)
            cr = arr[i];
        else{
            cr = arr[i];
            if(cr >= nx)
                cr = nx-1;
        }
        res += cr;
        nx = cr;
        i--;
    }


    cout << res;
    return 0;
}