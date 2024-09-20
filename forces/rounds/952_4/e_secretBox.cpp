#include<iostream>
#include<cmath>
#define ips(a, b, c, k) cin>>a>>b>>c>>k;
#define ll unsigned long long
using namespace std;



ll spaces(int x, int y, int z, int a, int b, int c){
    ll d1 = abs(x-a)+1;
    ll d2 = abs(y-b)+1;
    ll d3 = abs(z-c)+1;
    return (d1*d2*d3);
}


int main(){
    int t; cin >> t;
    while(t--){
        int x, y, z;
        ll k;
        ips(x, y, z, k);

        int maxx = log3(k, x);
        ll res = 0;

        for(int i=1; i<maxx; i++){
            for(int j=1; j<maxx; j++){
                for(int k=1; k<maxx; k++){
                    ll prod = x*y*z;
                    if(prod == k){
                        ll space = spaces(x,y,z, i, j, k);
                        if(space > res)
                            res = space;
                    }
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
