//https://codeforces.com/problemset/problem/510/A
#include<iostream>
#define in(x, y) cin >> x >> y;
#define op(n) cout << n << endl;
#define ll long long
using namespace std;



int main(){
    int x, y;
    in(x, y);

    bool s = false;
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            int l = 0;
            int r = y-2;
            if(!s){
                l = 1;
                r = y-1;
            }
            if(i % 2 == 0)
                cout << "#";
            else{
                if(j >= l && j <= r)
                    cout << ".";
                else
                    cout << "#";
            }
        }
        if( i % 2 == 0)
            s = !s;
        cout << endl;
    }
    return 0;
}