//https://codeforces.com/problemset/problem/1073/A
#include<iostream>
#define ip(x) cin >> x;
using namespace std;



int main(){
    int n; ip(n);
    string s; ip(s);
    bool k = false;

    for(int i=0; i<s.length()-1; i++){
        if(s[i] != s[i+1]){
            k = true;
            break;
        }
    }
    
    if(k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}