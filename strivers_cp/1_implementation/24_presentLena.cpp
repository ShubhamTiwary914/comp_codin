#include<iostream>
#define ip(x) cin >> x;
using namespace std;


int main(){
    int n; ip(n);
    int gaps = 2*n+2;
    int peak = 0;

    for(int i=0; i<=(2*n); i++){
        gaps = (i <= n) ? gaps - 2 : gaps + 2;

        for(int j=0; j<gaps; j++)  
            cout << " ";
        
        peak = (i <=n ) ? i : (2*n - i);
        for(int j=0; j<=peak; j++)
            cout << j << " ";
        for(int j=peak-1; j>=0; j--)
            cout << j << " ";

        cout << endl;
        
    }

    return 0;
}