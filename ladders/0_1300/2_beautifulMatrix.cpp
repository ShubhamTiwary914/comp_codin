//https://codeforces.com/problemset/problem/263/A
#include<iostream>
using namespace std;



int main(){
    int temp;
    int x, y;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> temp;
            if(temp == 1){
                x = i; y = j;
            }
        }
    }
    cout << abs(x-2) + abs(y-2);
    return 0;
}
