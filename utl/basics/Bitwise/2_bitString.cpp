#include<iostream>
#define ll long long
#define MAX 1000000007
using namespace std;

//find pow of 2 % MAX
ll exp(int k){
    if(k == 0)
        return 1;
    if(k == 1)
        return 2;
    
    ll k2 = exp(k/2) % MAX;
    ll res = (k2*k2)%MAX;

    if(k & 1)
        res = (res*2) % MAX;
    return res;
}

int main(){
    int n; cin >> n;
    cout << exp(n);
    return 0;
}