//https://codeforces.com/problemset/problem/1199/A
#include<iostream>
#define ip(x, y, z) cin >> x >> y >> z;
#define ips(arr, n) for(int i=0; i<n; i++) cin >> arr[i];
#define ll long long
using namespace std;


bool checkRange(int arr[], int d, int x, int y){
    for(int i=x; i<=y; i++){
        if(i != d && arr[d] >= arr[i])
            return false;
    }
    return true;
}


int main(){
    int n, x, y; ip(n, x, y);
    int arr[n]; ips(arr, n);

    int d = 0;
    while(d < n){
        int l = (d-x < 0) ? 0 : (d-x);
        int r = (d+y >= n) ? n-1 : (d+y);
        if(checkRange(arr, d, l, d-1)){
            if(checkRange(arr, d, d+1, r)){
                cout << (d+1);
                break;
            }
        }
        d++;
    }
    return 0;
}