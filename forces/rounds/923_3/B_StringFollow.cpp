//https://codeforces.com/contest/1927/problem/B
#include<iostream>
#include<vector>
using namespace std;

int getChar(int index){
    return (char)(index+97);
}


int main(){
    int t; cin >> t;
    for(int k=0; k<t; k++){
        int n; cin >> n;
        int counts[n];
        for(int i=0; i<n; i++)
            cin >> counts[i];

        //index[0-25] represents [a,b,c,d,...,z]
        vector<int> store(26, 0);
        string out = "";

        for(int count: counts){
            for(int i=0; i<26; i++){
                if(store[i] == count){
                    store[i]++;
                    out += getChar(i);
                    break;
                }
            }
        }

        cout << out << endl;
    }
    return 0;
}