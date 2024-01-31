//https://codeforces.com/problemset/problem/1352/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    for(int k=0; k<t; k++){
        int num; cin >> num;
        int exp = 0;
        
        vector<int> res;
        while(num > 9){
            int x = (num%10);
            if(x == 0)
                break;
            res.push_back(x*pow((int)10, (int)exp));
            num = num/10;
            exp++;
        }

        cout << res.size() + 1 << endl;
        for(int i=0; i<res.size(); i++)
            cout << res[i] << " ";
        cout << num*pow(10, exp);
    }


    return 0;
}