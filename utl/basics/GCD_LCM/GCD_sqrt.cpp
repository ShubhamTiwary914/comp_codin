#include<bits/stdtr1c++.h>
using namespace std;


int solve(int a, int b){
    int maxdiv = 1;
    int mini = min(a, b);
    int maxi = max(a, b);

    for(int i=1; i<=sqrt(mini); i++){
        if(mini % i == 0){
            if(maxi % i == 0)
                maxdiv = i;

            if(i != (mini/i)){
                if(maxi % (mini/i)== 0)
                    return (mini/i);
            }
        }
    }
    return maxdiv;
}



int main(){
    int a, b;
    cin >> a >> b;
    cout << solve(a, b);
    return 0;
}