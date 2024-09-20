#include<bits/stdtr1c++.h>
#include<unordered_set>
#define ll long long
using namespace std;


int isDivisibles(unordered_set<ll> &arr, ll i){
    for(int x: arr){
        if(x % i != 0)
            return 0;
    }
    return 1;
}



int main(){
    int n; cin >> n;
    ll mini = LLONG_MAX;
    unordered_set<ll> arr;

    ll a;
    for(int i=0; i<n; i++){
        cin >> a;
        arr.insert(a);
        mini = min(mini, a);
    }

    unsigned int res = 0;
    for(ll i=1; i<=sqrt(mini); i++){
        if(mini % i == 0){
            res += isDivisibles(arr, i);
            if(i != (mini/i))
                res += isDivisibles(arr, (mini/i));
        }
    }
        
    cout << res;
    return 0;
}