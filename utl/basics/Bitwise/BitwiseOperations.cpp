#include<iostream>
#include<limits>
#define ll long long
#define ui unsigned int
using namespace std;


//find power of 2 -> find "k" in 2^k
int powersof2(ll num){
    for(int i=0; i<=30; i++)
        //left complement of 1 till find index of 2's power
        if((1 << i) & num)
            return i+1;
    return -1;
}

//check if ith bit is set
int checkBit(int num, int i){
    return ((1 << i) & num);
}

int setBit(int n, int i){
    return n | (1 << i);
}

int unsetBit(int n, int i){
    return ~(1 << i ) & n;
}


ll flipBits(ll n){
    cout << (n ^ UINT32_MAX);
    return n;
}

ll swapBits(ll n){
    for(int i=0; i<32-1; i+=2){
        int l = (1 << (i+1)) & n; 
        int r = (1 << i ) & n;
        if(l != r){
            n = (1 << i) ^ n;
            n = (1 << (i+1)) ^ n;
        }
    }
    return n;
}

ui reverseBits(ui n){
    int i = 0, j = 31;
    while(i < j){
        int bi = (1 << i) & n;
        int bj = (1 << j) & n;

        if(bi != bj){
            n = (1 << i) ^ n;
            n ^= (1 << j);
        }
        i++;
        j--;
    }
    return n;
}


int main(){
    int n; cin >> n;
    cout << endl << reverseBits(n);
    return 0;
}