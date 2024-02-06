//https://codeforces.com/contest/1927/problem/A
#include<iostream>
using namespace std;



int main(){
    int t; cin >> t;
    for(int k=0; k<t; k++){
        int n; cin >> n;
        string colors; cin >> colors;

        bool firstFound = false;
        int first, second;

        for(int i=0; i<colors.length(); i++){
            if(colors[i] == 'B'){
                if(!firstFound){
                    firstFound = true;
                    first = i;
                }
                second = i;    
            }
        }
        
        if(!firstFound)
            cout << 0 << endl;
        else
            cout << second - first + 1 << endl;

    }
    return 0;
}