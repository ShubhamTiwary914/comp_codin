//https://codeforces.com/problemset/problem/80/A
#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n, m;
    cin >> n >> m;

    
    vector<int> primes(51, 1); //1-based indexing from 1-50
    //prime generation in primes array
    for(int i=2; i<=55; i++){
        for(int j=i+i; j<=50; j+=i){
            primes[j] = 0;
        }
    }

    //m is not prime
    if(primes[m] == 0)
        cout << "NO";
    else{
        bool nextPrime = true;
        //m is prime -> confirm m is next prime of n
        for(int i=n+1; i<m; i++){
            if(primes[i]){
                cout << "NO";
                nextPrime = false;
                break;
            }
        }
        if(nextPrime)
            cout << "YES";
    }

    return 0;
}