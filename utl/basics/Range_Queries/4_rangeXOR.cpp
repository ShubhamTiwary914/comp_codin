#include<iostream>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, q; cin >> n >> q;
    int arr[n];
    int pre[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(i == 0)
            pre[i] = arr[i];
        else
            pre[i] = arr[i] ^ pre[i-1];
    }

    int a, b;
    while(q--){
        cin >> a >> b; a--; b--;
        if(a - 1 < 0)
            cout << pre[b] << endl;
        else
            cout << ( pre[b] ^ pre[a-1] ) << endl;
    }

    return 0;
}