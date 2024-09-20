#include<iostream>
#define ip(x) cin >> x;
using namespace std;


int main(){
    int n; ip(n);
    string s; ip(s);

    int k=1, i=0;
    while(i < n){
        cout << s[i];
        i+=k;
        k++;
    }
}