#include<iostream>
#define ip(n) cin >> n;
#define loop(n, b) for(int i=0; i<n; i++) b
using namespace std;



int main(){
    int n; ip(n);
    int res[n];

    loop(n, {
        int pi; ip(pi);
        pi--;
        res[pi] = i+1;
    })

    loop(n, {
        cout << res[i] << " ";
    })
    return 0;
}