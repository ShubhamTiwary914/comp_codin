#include<iostream>
#include<tuple>
#include<vector>
using namespace std;





int main(){
    int n, q;
    cin >> n >> q;
    vector<tuple<int,int,int>> store;
    
    int ai;
    for(int i=0; i<n; i++){
        cin >> ai;
        ai--;
        if(i == 0)
            store.push_back(make_tuple(0, 0, 0));
        else
            store.push_back({ get<0>(store[i-1]), get<1>(store[i-1]), get<2>(store[i-1]) });
        switch(ai){
            case 0:
                get<0>(store[i])++;
                break;
            case 1:
                get<1>(store[i])++;
                break;
            case 2:
                get<2>(store[i])++;
                break;
        }
    }

    int a, b;
    while(q--){
        cin >> a >> b;
        a--; b--;
        if(a - 1 < 0)
            cout << get<0>(store[b]) << " " << get<1>(store[b]) << " " << get<2>(store[b]) << endl;
        else{
            cout << ( get<0>(store[b]) - get<0>(store[a-1]) ) << " " << ( get<1>(store[b]) - get<1>(store[a-1]) ) << " " << (  get<2>(store[b]) - get<2>(store[a-1]) ) << endl; 
        }
    }

    return 0;
}