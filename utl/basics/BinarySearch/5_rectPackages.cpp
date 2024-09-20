#include<iostream>
#include<climits>
#define ll long long 
#define ull unsigned long long
using namespace std;



int main(){
    int w, h, n;
    cin >> w>>h>>n;

    ull l = 0, r = ULLONG_MAX;
    ull res = r;
    while(l<=r){
        ull side = (l+r)/2;
        ull maxW = (side/w);
        ull maxH = (side/h);

        ull prod = (maxW * maxH);
        if(prod >= n){
            res = side;
            r = side-1;
        }
        else
            l = side+1;
    }
    cout << res;
    return 0;
}