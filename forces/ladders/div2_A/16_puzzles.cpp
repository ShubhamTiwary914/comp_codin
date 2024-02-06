//https://codeforces.com/problemset/problem/337/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int n, m;
    cin >> n >> m;

    int pieces[m];
    for(int i=0; i<m; i++)
        cin >> pieces[i];
    sort(pieces, pieces+m);


    //differene between max and min in a sliding window of size 'n'
    int i=0, j=n-1;
    int minDiff = pieces[j] - pieces[i];
    while(j < m){
        minDiff = min(minDiff, pieces[j]-pieces[i]);
        i++;
        j++;
    }
    cout << minDiff;

    return 0;
}