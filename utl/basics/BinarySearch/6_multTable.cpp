#include<iostream>
#define ll long long
using namespace std;



int solve(int n){
    ll l = 1, r = (n*n);
    int req = (r/2);

    while(l <= r){
        ll i = (l+r)/2;
        ll left = 0, curr = 0;
        for(int j=1; j<=n; j++){
            int smols = (i/j);
            if(smols > n)
                smols = n;
            else if((i % j) == 0){
                curr++;
                smols--;
            }
            left += smols;
        }
        ll right = (n*n) - (left+curr); 

        int l1 = left+1, r1 = left+curr;
        if(req >= l1 && req <= r1)
            return i;

        else if(left > right)
            r = i-1;
        else
            l = i+1;
    }
    return 1;
}


int main(){
    int n; cin >>n;
    cout << solve(n);
    return 0;
}