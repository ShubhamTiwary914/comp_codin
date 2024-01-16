//https://codeforces.com/contest/1915/problem/B
#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a=0, b=0, c=0;
        char row[3];
        for(int k=0; k<3; k++){
            for(int j=0; j<3; j++){
                cin >> row[j];
                if (row[j]=='A'){a++;}
                if (row[j]=='B'){b++;}
                if (row[j]=='C'){c++;}
            }
        }
        char missing;
        if(a < 3) missing = 'A';
        if(b < 3) missing = 'B';
        if(c < 3) missing = 'C';
        cout << missing << endl;
    }
    return 0;
}