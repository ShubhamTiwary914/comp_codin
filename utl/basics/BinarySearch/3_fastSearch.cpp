#include<iostream>
#include<bits/stdc++.h>
#define umap unordered_map<int, pair<int,int>>
using namespace std;



int BS(int arr[], int n, int q, bool lb){
    int l=0, r=n-1;
    if(q < arr[0])
        return 0;
    if(q > arr[r])
        return n;

    int res = 0;
    while(l <= r){
        int m = (l+r)/2;
        if(arr[m] == q){
            res = m;
            if(lb)
                r = m-1;
            else
                l = m+1;
        }
        else if(arr[m] <  q)
            l = m+1;
        else
            r = m-1;
    }
    if(l <= r)
        return res;
    if(lb)
        return l;
    return r;
}




int main(){
    int n; cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);

    int k; cin >> k;

    int l, r;
    while(k--){
        cin >> l >> r;
        int left = BS(arr, n, l, true);
        int right = BS(arr, n, r, false);

        cout << (right - left) + 1 << endl;
    }
}

