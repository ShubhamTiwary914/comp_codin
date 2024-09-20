#include<iostream>
#define ip(x) cin >> x;
#define ips(x, y, z) cin >> x >> y >> z;
#define ll long long
using namespace std;


int main(){
    int t; ip(t);
    while(t--){
        int a, b, c; 
        ips(a, b, c);

        int res1 = -1;
        int res2 = -1;

        for(int i=1; i<=b; i++){
            ll x = (a*i);
            ll y = ( ((i-1)/b) + 1) * c;
        
            if(x < y)
                res1 = i;
            else if(y < x)
                res2 = i;
            
            if(res1 != -1 && res2 != -1)
                break;
        }
        cout << res1 << " " << res2 << endl;
    }
    return 0;
}