//https://codeforces.com/problemset/problem/266/A
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    string colors;
    cin >> colors;

    char curr = colors[0];
    int count = 0;
    int res = 0;

    for(int i=0; i<n; i++){
        if(colors[i] == curr){
            count++;
        }else{
            curr = colors[i];
            res += (count-1);
            count = 1;
        }
    }
    if(count > 1)
        res += (count-1);

    cout << res;
}