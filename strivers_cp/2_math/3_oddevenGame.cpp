//https://codeforces.com/problemset/problem/959/A
#include<iostream>
#define ips(a) cin>>a;
using namespace std;



int main(){
    int n; ips(n);
    if(n % 2 == 0)
        cout << "Mahmoud";
    else
        cout << "Ehab";
    return 0;
}