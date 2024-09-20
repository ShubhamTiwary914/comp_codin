#include<iostream>
#define ip(x) cin >> x;
using namespace std;


int main(){
    int n; ip(n); //n=pages
    int days[7];
    int summ = 0;
    for(int i=0; i<7; i++){
        cin >> days[i];
        summ += days[i];
    }

    int week = (n/summ);
    int rem = n - (week * summ);

    // cout << week << endl;
    // cout << summ << endl;
    // cout << rem << endl;

    if(summ == n){
        cout << 7;
        return 0;
    }

    for(int i=0; i<7; i++){
        rem -= days[i];
        if(rem <= 0){
            cout << (i+1);
            break;
        }
    }
    return 0;
}