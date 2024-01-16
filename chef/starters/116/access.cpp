//https://www.codechef.com/problems/ACCESS
#include <iostream>
using namespace std;

int main() {
    int testcases;  cin >> testcases;
    for(int testcase=0; testcase<testcases; testcase++){
        int n, x;
        cin >> n >> x;
        char actions[n];
        for(int i=0; i<n; i++)
            cin >> actions[i];
            
        int swipe = 0;
        bool open = true;
        
        for(int i=0; i<n; i++){
            if(open){
                if(actions[i] == '0'){
                    if(swipe > 0)
                      swipe--;
                    else{
                        open = false;
                        break;
                    }
                }
                else{
                    swipe = x;
                }
            }
        }
        
        if(open)
          cout << "YES\n";
        else
          cout << "NO\n";
    }
	return 0;
}
