//https://codeforces.com/contest/1927/problem/C
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t; cin >> t;
    for(int test=0; test<t; test++){
        int n, m, k;
        cin >> n >> m >> k;

        int arrA[n], arrB[m];
        for(int i=0; i<n; i++)
            cin >> arrA[i];
        for(int i=0; i<m; i++)
            cin >> arrB[i];

        unordered_map<int, int> marker;
        int acount = 0, bcount = 0;

        //A's loop -> mark items found under A directly  [mark = 1]
        for(int itemA: arrA){
            if(itemA >= 1 && itemA <= k && !marker.count(itemA)){
                acount++;
                marker[itemA] = 1;
            }
        }
        //B's loop ->if already found in A-> snatch if A has more, else mark if not
        for(int itemB: arrB){
            if(itemB >= 1 && itemB <= k && !marker.count(itemB)){
                bcount++;
                marker[itemB] = 2;
            }
            //if owned by a
            else if(itemB >= 1 && itemB <= k && marker[itemB] == 1){
                if(acount > bcount && acount > k/2){
                    marker[itemB] = 2;
                    bcount++;
                    acount--;
                }
            }
        }

        //final cond:
        bool kPass = true;
        for(int i=1; i<=k; i++){
            if(!marker.count(i)){
                kPass = false;
                break;
            }
        }
        if(kPass && acount >= k/2 && bcount >= k/2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}