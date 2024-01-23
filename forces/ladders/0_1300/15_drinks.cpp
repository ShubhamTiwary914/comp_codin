//https://codeforces.com/problemset/problem/200/B
#include<iostream>
using namespace std;



int main(){
    int n; cin >> n;
    int summ = 0;
    int temp;

    for(int i=0; i<n; i++){
        cin >> temp;
        summ += temp;
    }

    cout << ((double)summ/(double)(n));

    return 0;
}