//https://codeforces.com/contest/1921/problem/A
#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int x[2] = {100000, -100000}, y[2] = {100000, -100000};  //min, max
        int xi, yi;
        for(int i=0; i<4; i++){
            cin >> xi >> yi;
            x[0] = min(x[0], xi);
            x[1] = max(x[1], xi);
            y[0] = min(y[0], xi);
            y[1] = max(y[1], xi);
        }
        unsigned long long int totalX = abs(x[1]-x[0]);
        unsigned long long int totalY = abs(y[1]-y[0]);
        unsigned long long int res = totalX*totalY;
        cout << (totalX*totalY) << endl;
    }
}