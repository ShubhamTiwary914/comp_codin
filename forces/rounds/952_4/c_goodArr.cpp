#include<iostream>
#define ip(a) cin >> a;
#define ll unsigned long long
using namespace std;


int main(){
    int t; ip(t);
    while(t--){
        int n; ip(n);
        int arr[n];
        ll summ[n];
        int lgs[n];

        int maxx = -1;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            //summ
            if(i == 0)
                summ[0] = arr[0];
            else
                summ[i] = summ[i-1] + arr[i];
            //lg index
            if(arr[i] > maxx){
                maxx = arr[i];
                lgs[i] = i;
            }
            else
                lgs[i] = lgs[i-1];
        }

        int res = 0;
        for(int i=0; i<n; i++){
            ll currSum = summ[i];
            int j = lgs[i];
            if((currSum - arr[j]) == arr[j])
                res++;
        }
        cout << res << endl;
    }
}