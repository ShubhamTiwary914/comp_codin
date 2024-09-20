#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;



int main(){
    int n, k, q;
    cin >> n >> k >> q;
    unordered_map<int, int> diffArray;
    int l, r;

    //n - recipes
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> l >> r;
        diffArray[l]++;
        diffArray[r+1]--;
        mini = min(mini, min(l, r));
        maxi = max(maxi, max(l ,r));
    }

    
    vector<ull> prefixInts(maxi-mini+1, 0);
    ull summ = 0, prefs = 0;
    for(int i=mini; i<=maxi; i++){
        summ += diffArray[i];
        if(summ >= k)
            prefs++;
        prefixInts[i - mini] = prefs;
    }


    //q - queries
    for(int i=0; i<q; i++){
        cin >> l >> r;
        ll left = 0, right = 0;
        if(l > mini) left = prefixInts[l - mini - 1];
        if(l == mini) left = prefixInts[0];

        if(r < maxi) right = prefixInts[r - mini];
        if(r > maxi) right = prefixInts[prefixInts.size()-1];
        cout << (right - left) << endl;
    }
    return 0;
}