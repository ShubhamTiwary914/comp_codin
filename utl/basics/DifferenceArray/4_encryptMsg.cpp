#include<iostream>
#include<bits/stdc++.h>
#define loop(n, body) for(int i=0;i<n; i++) body
#define ll long long
using namespace std;



int main(){
    int n, m, c;
    cin >> n >> m >> c;
    unordered_map<int, ll> store;
    int arr[n];
    loop(n, { cin >> arr[i]; });

    ll summ = 0;
    int bi;
    loop(m, {
        cin >> bi;
        summ = ((summ%c) + (bi%c)) %c;
        store[(i+1)] = summ;
    });

    ll resi;
    for(int i=1; i<m; i++){
        int j = i;
        cout << (store[j]) << " ";
    }
    for(int i=0; i<(n-2*m-1); i++){
        int j = m+i;
        cout << store[m] << " ";
    }
    for(int i=1; i<m; i++){
        int j = (n-m+i);
        cout << (store[m] - store[j]) << " ";
    }
    return 0;
}