#include<iostream>
#include<math.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        int sides[n];
        long int sum = 0;

        for(int i=0; i<n; i++){
            cin >> sides[i];
            sum += sides[i];
        }
        //integer -> defined by   x = floor(x)
        if(sqrt(sum) == floor(sqrt(sum))){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}