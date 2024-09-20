#include<bits/stdtr1c++.h>
#define ll unsigned long long
using namespace std;


ll lcm(int a, int b){
    ll maxi = max(a, b);
    ll end = (ll)a*(ll)b; 

    for(ll i=maxi; i<=end; i+=maxi){
        if(i % a == 0 && i % b == 0)
            return i;
    }
    return end;
}



int main(){
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        ll LCM = lcm(a, b);
        ll HCF = (((ll)a*(ll)b)/LCM);
        cout << LCM << " " << HCF;
    }
    return 0;
}