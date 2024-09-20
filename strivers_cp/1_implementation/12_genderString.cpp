#include<iostream>
#include<vector>
#define ip(x) cin >> x;
using namespace std;


int main(){
    string s; ip(s);
    vector<int> store(26, 0);
    int res = s.length();
    for(char ch: s){
        int i = (int)ch - 97;
        //if repeated -> remove distinct
        if(store[i] >= 1)
            res--;
        store[i]++;
    }
    cout << ((res % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
