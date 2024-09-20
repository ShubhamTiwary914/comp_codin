#include<iostream>
#include<bits/stdc++.h>
#define ll long long 
using namespace std;



int main(){
    int n, q;
    cin >> n >> q;

    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    sort(arr, arr+n);

    while(q--){
        int x, y;
        cin >>x >>y;
        ll res = 0;
        int count=0;

        int i=n-x;
        while(count<y){
            res += arr[i];
            i++;
            count++;
        }
        cout<<res << endl;
    }

    return 0;
}