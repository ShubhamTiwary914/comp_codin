#include<iostream>
#define ll unsigned long long
using namespace std;



int main(){
    int n, q;
    cin >> n >> q;

    ll pre[n];
    int ai;
    for(int i=0; i<n; i++){
        cin >> ai;
        if(i == 0)
            pre[i] = ai;
        else
            pre[i] = ai + pre[i-1];
    }

    int i,j;
    while(q--){
        cin >> i >> j;
        i--; j--;
        if(i == 0)
            cout << pre[j] << endl;
        else
            cout << (pre[j] - pre[i-1]) << endl;
    }
    return 0;
}