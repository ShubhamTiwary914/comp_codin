#include<iostream>
#define ip(x) cin >> x;
using namespace std;



int main(){
    int n; ip(n);
    string s; 

    while(n--){
        int res = 0, cons=0, i=0;
        bool onestart = false;
        ip(s);

        for(char ch: s){
            if(ch == '0')
                cons++;
            else{
                cons = 0;
                onestart = true;
            }
            
            if((i < s.length()-1) && (onestart) && (s[i+1] == '1'))
                res += cons;
            i++;
        }
        cout << res << endl;
    }
    return 0;
}