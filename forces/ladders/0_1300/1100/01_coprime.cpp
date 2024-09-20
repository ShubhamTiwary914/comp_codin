#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//n1 >> n2
int gcd(int n1, int n2){
    if(n2 > n1){
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }
    if(n1 == n2)
        return n1;
    if(n1 == 1 || n2 == 1)
        return 1;
    int n3 = n1%n2;
    if(n3 == 0)
        return n2;
    return gcd(n2, n3); 
}



int solve(int arr[], int n){
    int maxres = -1;
    for(int i=n-1; i>=0; i--){
        for(int j=i; j>=0; j--){
            if(arr[i] == arr[j] && arr[i] == 1)
                return (i+1)+(j+1);
            if(arr[i] != arr[j]){
                if(gcd(arr[i], arr[j]) == 1)
                    maxres = max(maxres, i+j+2);
            }
        }
    }
    return maxres;
}



int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];

        int res = solve(arr, n);
        cout << res << endl;
    }
    
    return 0;
}