#include<iostream>
using namespace std;



string search(int arr[], int n, int q){
    int l =0, r = n-1;
    while(l <= r ){
        int m = (l+r)/2;
        if(arr[m] == q)
            return "YES";
        else if(arr[m] < q)
            l = m+1;
        else
            r = m-1;
    }
    if((l >= 0 && l < n && arr[l] == q) || (r < n && r >= 0 && arr[r] == q) )
        return "YES";
    return "NO";
}


int main(){
    int n, k;
    cin >> n>>k;
    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int q; 
    while(k--){
        cin >> q;
        cout << search(arr, n, q) << endl;
    }
        
    return 0;
}