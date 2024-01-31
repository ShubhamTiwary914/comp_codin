//https://codeforces.com/problemset/problem/1391/B
#include<iostream>
using namespace std;



int main(){
    int test; cin >> test;
    for(int t=0; t<test; t++){
        int rows, cols;
        cin >> rows >> cols;

        int res = 0;
        char ch;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                cin >> ch;
                if(i == rows-1)
                    res += ((ch == 'D') ? 1: 0);
                if(j == cols-1)
                    res += ((ch == 'R') ? 1: 0);
            }
        }

        cout << res << endl;
    }
    return 0;
} 
