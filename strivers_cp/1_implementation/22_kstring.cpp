#include<iostream>
#include<unordered_map>
#define ip(x) cin >> x;
#define str string
using namespace std;


int main(){
    int k; str s;
    ip(k); ip(s);

    //count freqs
    unordered_map<char, int> store;
    for(char ch: s)
        store[ch]++;
    
    //generate one substring
    str sub = "";
    for(auto i: store){
        char ch = i.first;
        int count = i.second;
        if(count % k != 0){
            cout << -1;
            return 0;
        }
        for(int i=0; i<(count/k); i++)
            sub += ch;
    }
    //cout << sub << endl;

    s.clear();
    //generate full string
    for(int i=0; i<k; i++)
        s+= sub;
    
    cout << s;

    return 0;
}