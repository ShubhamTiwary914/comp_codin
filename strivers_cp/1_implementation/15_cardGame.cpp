#include<iostream>
#define ip(x) cin >> x;
using namespace std;

bool solver(){
    string src; ip(src);
    string s; 

    for(int i=0; i<5; i++){
        cin >> s;
        if(s[0] == src[0] || s[1] == src[1])
            return true;
    } 
    return false;
}

int main(){
    bool res = solver();
    if(res)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}