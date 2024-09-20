#include<iostream>
#include<bits/stdtr1c++.h>
#define loop(n, body) for(int i=0; i<n; i++) body
#define ull unsigned long long
using namespace std;


int main(){
    int n, k; cin >> n >> k;
    int arr[n];
    loop(n, cin >> arr[i];);

    int i=0, j=0;
    ull summ = 0;
    int res = INT_MAX;

    while(i < n){
        if(j >= n){
            if(summ >= k){
                res = min(res, n-1-i+1);
                summ -= arr[i];
                i++;                
                continue;
            }
            else
                break;
        }
        if(summ < k){
            summ += arr[j];
            if(summ >= k)
                res = min(res, j-i+1);
            j++;
        }
        else{
            if(summ >= arr[i])
                summ -= arr[i];
            if(summ >= k)
                res = min(res, j-i+1);
            i++;
        }
    }
    if(res == INT_MAX)
        cout << -1;
    else
        cout << res;
    return 0;
}