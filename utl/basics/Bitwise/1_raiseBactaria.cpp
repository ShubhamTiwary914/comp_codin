#include<iostream>
using namespace std;

int countBits(int x){
    int count = 0;
    for(int i=0; i<32; i++)
        if((1 << i) & x)
            count++;
    return count;
}

int main(){
    int n; cin >> n;
    cout << countBits(n);
    return 0;
}