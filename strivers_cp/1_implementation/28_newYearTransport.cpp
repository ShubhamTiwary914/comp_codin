//https://codeforces.com/problemset/problem/500/A
#include<iostream>
#include<bits/stdc++.h>
#define ips(x, y) cin >> x >> y;
#define ll long long
using namespace std;


int main(){
    int n, k;
    ips(n, k);

    int arr[n-1];
    for(int i=0; i<n-1; i++)
        cin >> arr[i];

    vector<bool> store(k, false);
    store[k-1] = true;

    for(int i=k-2; i>=0; i--){
        int j = (i + arr[i]);
        if(j >= k)
            store[i] = false;
        else
            store[i] = store[j];
    }
    
    if(store[0])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}