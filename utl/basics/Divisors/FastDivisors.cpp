#include<bits/stdtr1c++.h>
using namespace std;



int main(){
    int n; cin >> n;
    vector<int> store;
    for(int i=1; i<=sqrt(n); i++){
        if(!(n % i)){
            store.push_back(i);
            if(i != (n/i))
                store.push_back(n/i);
        }
    }
    sort(store.begin(), store.end());
    
    for(int i: store)
        cout << i << endl;
    return 0;
}