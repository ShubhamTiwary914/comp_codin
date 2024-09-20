#include<bits/stdtr1c++.h>
#include<iostream>
#define ll long long
using namespace std;



int main(){
    int n, k;
    cin >> n >> k;
    ll pre[n];
    int ai;

    int size = 0;
    bool startRange = false;
    ll mini = INT_MAX;
    ll res = 0;

    for(int i=0; i<n; i++){
        size++;
        if(size >= k)
            startRange = true;
            
        cin >> ai;
        if(i == 0) pre[i] = ai;
        else pre[i] = ai + pre[i-1];

        int l = i-k;
        int r = i;

        if(startRange){
            if(l < 0){
                if(pre[r] < mini){
                    mini = pre[r];
                    res = (l+2);
                }   
            }
            else{
                if((pre[r] - pre[l]) < mini){
                    mini = pre[r] - pre[l];
                    res = (l+2);
                    
                }
            }
        }
    }

    cout << res;
    return 0;
}