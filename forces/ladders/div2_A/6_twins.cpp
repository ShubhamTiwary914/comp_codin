#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    int total = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        total += arr[i];
    }
    sort(arr, arr+n);

    int coins = 0;
    int curr = 0;
    for(int i=n-1; i>=0; i--){
        if(curr > (total - curr))
            break;
        curr += arr[i];
        coins++;
    } 
    cout << coins;
}