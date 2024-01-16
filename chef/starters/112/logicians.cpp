//https://www.codechef.com/problems/LOGICIAN
#include <iostream>
using namespace std;

int main() {
    int testcases;  cin >> testcases;
    for(int testcase=0; testcase<testcases; testcase++){
        int n; string s;
        cin >> n; cin >> s;
        int sum = 0;
        bool zerofound = false;
        for(int i=0; i<n; i++){
            if(zerofound){
                cout << "NO\n";
            }else{
                if(s[i] == '1'){
                    //check if everyone is one on last
                    if(i == n-1){
                        if(sum == n-1)
                            cout << "YES\n";
                    }
                    else{
                        cout << "IDK\n";
                    }
                    sum++;
                }else{
                    zerofound = true;
                    cout << "NO\n";
                }
            }
        }
    }
	return 0;
}