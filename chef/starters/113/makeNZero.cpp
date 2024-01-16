//https://www.codechef.com/problems/MAKENZERO
#include <iostream>
using namespace std;

//whether div by either 3 or 4
bool divPossible(int num){
    if(num < 3)
        return false;
    if(num%3==0 || num %4 == 0)
        return true;
    return false;
}

int main() {
    int testcases;  cin >> testcases;
    for(int testcase=0; testcase<testcases; testcase++){
        int target; cin >> target;
        int threes = target, fours = target, sevens = target;
        bool found = false;
        while(threes>0 || fours>0 || sevens>0){
            if(divPossible(threes) || divPossible(fours) || divPossible(sevens)){
                found = true;
                break;
            }
            threes -= 3; fours -= 4; sevens -= 7;
            if(threes<3)
                break;
        }
        if(found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
	return 0;
}