//https://codeforces.com/problemset/problem/131/A
#include<iostream>
#define ip(x) cin >> x;
using namespace std;


char lower(char ch){
    if(ch >= 'A' && ch <= 'Z')
        return (char)((int)ch + 32);
    return ch;
}

char upper(char ch){
    if(ch >= 'a' && ch <= 'z')
        return (char)((int)ch - 32);
    return ch;
}


int main(){
    string s; ip(s);
    string res = "";

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        if(i == 0)
            res += upper(ch);
        else
            res += lower(ch);
    }
    cout << res;
    return 0;
}
