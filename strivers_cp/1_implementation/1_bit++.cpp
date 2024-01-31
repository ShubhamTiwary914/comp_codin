//https://codeforces.com/problemset/problem/282/A
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    int res = 0;
    string op;
    for(int i=0; i<n; i++){
        cin >> op;
        if(op == "++X" || op == "X++")
            res++;
        else    
            res--;
    }

    cout << res;
    return 0;
} 
