//https://codeforces.com/problemset/problem/1300/B
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int test; cin >> test;
    for(int t=0; t<test; t++){
        int n; cin >> n;

        int arr[2*n];
        for(int i=0; i<2*n; i++)
            cin >> arr[i];
        sort(arr, arr+2*n);

        int m1 = ((2*n -1)/2);
        int m2 = m1+1;

        cout << abs(arr[m1] - arr[m2]) << endl;
    }
    return 0;
} 
