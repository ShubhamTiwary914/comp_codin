//https://codeforces.com/problemset/problem/1352/A
#include<iostream>
#define in(n) cin >> n;
#define ender(); cout << endl;
#define ll long long
using namespace std;


int main(){
    int t; in(t);
    while(t--){
        ll n; in(n);
        string res = "";
        string st = "";
        int count = 0;
        while(n > 0){
            int digit = n%10;
            if(res.length() <= 0)
                res += digit + '0';
            else{
                res += '0';
                res[0] = digit + '0';
            }
            if(digit != 0){
                count++;
                st += res + " ";
            }
            n /= 10;
        }
        cout << count;
        ender();
        cout << st;
        ender();
    }
    return 0;
}