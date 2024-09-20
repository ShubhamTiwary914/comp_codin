#include<iostream>
#define ip(n) cin >> n;
#define loop(n, body) for(int i=0; i<n; i++) body
#define ll long long
using namespace std;



int main(){
    int n; ip(n);
    ll res = 0;
    loop(n, {
        string s;
        ip(s);
        
        //cout << s << endl;
        
        if(s == "Tetrahedron")
            res += 4;
        else if(s == "Cube")
            res += 6;
        else if(s == "Octahedron")
            res += 8;
        else if(s == "Dodecahedron")
            res += 12;
        else
            res += 20;
    })
    
    cout << res;
    return 0;
}