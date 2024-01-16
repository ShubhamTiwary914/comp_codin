//https://www.codechef.com/problems/MAXSCORE7
#include <iostream>
#include<stack>
using namespace std;

int main() {
    int testcases;  cin >> testcases;
    for(int testcase=0; testcase<testcases; testcase++){
        int n; cin >> n;
        stack<int> store;
        int pairs = 0;
        
        for(int i=0; i<n; i++){
            int curr; cin >> curr;
            if(store.empty())
                store.push(curr);
            else{
                //pair found, then count this
                if((curr == 1 && store.top() == 0) || (curr == 0 && store.top() == 1)){
                    store.pop();
                    pairs++;
                }else
                    store.push(curr);
            }
        }
        cout << pairs << endl;
    }
	return 0;
}