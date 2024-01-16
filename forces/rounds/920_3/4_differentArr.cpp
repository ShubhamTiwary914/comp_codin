#include<iostream>
#include<bits/stdc++.h>
using namespace std;


unsigned long long int longAbs(unsigned long long int &n1, unsigned long long int &n2){
    if(n1 > n2)
        return n1-n2;
    return n2-n1;
}



int main(){
    int t; cin >> t;
    for(int k=0; k<t; k++){
        //INPUTS
        unsigned long long int n, m;
        cin >> n >> m;
        unsigned long long int A[n], B[m];
        for(int i=0; i<n; i++)
            cin >> A[i];
        for(int i=0; i<m; i++)
            cin >> B[i];

        //sort A and B
        sort(A, A+n);
        sort(B, B+m);


        //calculate mid to act as turning point
        int mid;
        if(n % 2 == 0){
            mid = (n/2)-1;
        }else{
            mid = ((n-1)/2);
        }

        int i=0, j = m-1;
        unsigned long long int diff = 0;
        //note: n <= m
        while(i < n){
            if(i < mid){
                diff += longAbs(B[j], A[i]);
                j--;
            }
            else if(i == mid){
                if(i == j){
                    diff += longAbs(B[i], A[i]);
                    j--;
                }
                else{
                    int bestPos = (longAbs(B[j], A[i]) > longAbs(B[i], A[i])) ? j : i;
                    diff += longAbs(B[bestPos], A[i]);
                    j = i;
                }
            }
            else if(i > mid){
                diff += longAbs(B[j], A[i]);
                j--;
            }
            i++;
        }
        cout << diff << endl;
    }
    return 0;
}