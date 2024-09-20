//https://codeforces.com/problemset/problem/1027/A
#include<iostream>
#define ip(x) cin >> x;
using namespace std;


char left(char ch){
    int i = (int)ch - 1;
    if(i < 97)
        return (char)(123 - (97 - i));
    return (char)i;
}

char right(char ch){
    int i = (int)ch + 1;
    if(i > 122)
        return (char)(i - 1 - 122);
    return (char)i;
}





int main(){
    int t, n; ip(t);
    string s;

    while(t--){
        ip(n);
        ip(s);
        bool res = true;
        int i=0, j = n-1;
        while(i < j){
            if(s[i] != s[j]){
                char ileft = left(s[i]);
                char iright = right(s[i]);
                char jleft = left(s[j]);
                char jright = right(s[j]);
                if(ileft != jleft && ileft != jright && iright != jleft && iright != jright){
                    res = false;
                    break;
                }
            }
            i++;
            j--;
        }
        if(res)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
