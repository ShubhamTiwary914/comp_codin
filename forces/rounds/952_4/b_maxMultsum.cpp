#include<iostream>
#define ip(a) cin >> a;
#define ll long long
using namespace std;

ll summer(int k){
    return (k*(k+1))/2;
}


int main(){
    int t; cin >> t;
    while(t--){
        int n; ip(n);

        ll maxSumm = -1;
        ll res = 2;

        for(int x=2; x<=n; x++){
            int k = (n/x);
            ll currSum = x * summer(k);

            if(currSum > maxSumm){
                maxSumm = currSum;
                res = x;
            }
        }
        cout << res << endl;
    }
    return 0;
}