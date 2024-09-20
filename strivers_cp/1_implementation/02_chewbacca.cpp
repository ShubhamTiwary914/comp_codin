//https://codeforces.com/contest/514/problem/A
#include<iostream>
#include<algorithm>
#define in(n) cin >> n;
#define op(n) cout << n << endl;
#define ll long long
#define rev(n) reverse(n.begin(), n.end());
using namespace std;




int main(){
    ll n;
    in(n);
    string res = "";
    
    while(n > 0){
        int digit = n%10;
        if(n < 10){
            if(digit != 9){
                if(digit >= 5)
                    res += (9 - digit) + '0';
                else{
                    res += to_string(digit);
                }
            }
            else{
                res += '9';
            }
        }
        else{
            if(digit >= 5)
                res += (9 - digit) + '0';
            else{
                res += to_string(digit);
            }
        }
        //op(digit);
        n = n/10;
    }


    rev(res);
    op(res);
    return 0;
}
