//upper bound -> if exists
//prev index -> if not exists
#include<iostream>
using namespace std;


int BS(int arr[], int n, int q){
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
            l = m+1;
        }
        else if(arr[m] <  q)
            l = m+1;
        else
            r = m-1;
    }
    if(l <= r)
        return res+1;
    return r+1;
}


int main(){
    int n, k; cin >> n >> k;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];
    
    int q;
    for(int i=0; i<k; i++){
        cin >> q;
        cout << BS(arr, n, q) << endl;
    }
}