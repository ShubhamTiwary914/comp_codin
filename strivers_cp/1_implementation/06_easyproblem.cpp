#include<iostream>
#define ip(n) cin >> n;
#define loop(n, body) for(int i=0; i<n; i++) body
using namespace std;

int main(){
    int n;
    ip(n);

    bool res = true;
    loop(n, {
        int k; ip(k);
        if(k == 1){
            res = false;
            break;
        }
    });

    if(res) 
        cout << "EASY";
    else
        cout << "HARD";
}

