//https://codeforces.com/problemset/problem/1278/A
#include<iostream>
#include<unordered_map>
#define ip(x) cin >> x;
#define umap unordered_map<char, int>
#define counter(mapper, str) for(char ch: str) mapper[ch]++;
using namespace std;


int main(){
    int t; ip(t);
    while(t--){
        string p, h; ip(p); ip(h);
        umap pstore, hstore;
        counter(pstore, p);
        counter(hstore, h);

        int i=0, j = h.length()-1;
        while(i < j){
            bool step = false;
            char hi = h[i], hj = h[j];
            //not needed char, then move on
            if(!pstore.count(hi) || (hstore[hi] > pstore[hi])){
                hstore[hi]--;
                i++;
                step = true;
            }
            if(!pstore.count(hj) || (hstore[hj] > pstore[hj])){
                hstore[hj]--;
                j--;
                step = true;
            }
            if(!step)
                break;
        }

        // for(auto it: pstore){
        //     cout << it.first << " " << it.second << endl;
        // }
        // cout << endl;
        // for(auto it: hstore){
        //     cout << it.first << " " << it.second << endl;
        // }

        bool res = true;
        for(auto it: pstore){
            char ch = (char)it.first;
            if(hstore.count(ch) && it.second != hstore[ch]){
                res = false;
                break;
            }
        }
        if(res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
