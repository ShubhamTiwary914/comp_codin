#include<iostream>
#include<climits>
#define ll long long 
#define ull unsigned long long
using namespace std;



bool produce(int arr[], int n, ull time, int t){
    ull prods = 0;
    for(int i=0; i<n; i++){
        prods += (time/arr[i]);
        if(prods >= t)
            return true;
    }
    return false;
}


int main(){
    int n, t; cin >>n>>t;
    int arr[n];
    int maxi = -10000;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        maxi = max(arr[i], maxi);
    }
    
    ull l = 0;
    ull r = (t*maxi);
    ull res = r;
    while(l<=r){
        ull time = (l+r)/2;
        if(produce(arr, n, time, t)){
            res = time;
            r = time-1;
        }
        else
            l = time+1;
    }
    cout << res;
    return 0;
}