//https://codeforces.com/problemset/problem/1903/A
#include<iostream>
using namespace std;


bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1] > arr[i])
            return false;
    }
    return true;
}

bool solve(int arr[], int n, int k){
    if(k == 1){
        if(isSorted(arr, n))
            return true;
        return false;
    }
    return true;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>> arr[i];
    
        if(solve(arr, n, k))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}