#include<bits/stdtr1c++.h>
using namespace std;

int gcd(int a, int b){
    int mini = min(a, b);
    int maxi = max(a, b);

    if(b == 0)
        return a;
    if(b == 1)
        return 1;
    if(a == b)
        return a;
    return gcd(mini, maxi-mini);
}


int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}