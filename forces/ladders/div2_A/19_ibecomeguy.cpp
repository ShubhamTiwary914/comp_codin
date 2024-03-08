//https://codeforces.com/problemset/problem/469/A
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    //levels store
    int levels[n];
    for(int i=0; i<n; i++)
        levels[i] = 0;

    int level;
    //first player
    int p; cin >> p;
    for(int i=0; i<p; i++){
        cin >> level;
        levels[level-1] = 1;
    }

    //second player
    int q; cin >> q;
    for(int i=0; i<q; i++){
        cin >> level;
        levels[level-1] = 1;
    }


    //checker
    bool passer = true;
    for(int i=0; i<n; i++){
        if(levels[i] == 0){
            passer = false;
            break;
        }
    }

    if(passer)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";


    return 0;
}