#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        //inputs
        unsigned long long int n, charge, onUnitCost, switchCost;
        cin >> n >> charge >> onUnitCost >> switchCost;

        unsigned long long int moments[n+1]; 
        moments[0] = 0; //start off from moment 0
        for(int i=1; i<n+1; i++)
            cin >> moments[i];
        

        //solve
        bool exitCode = false;
        for(int i=0; i<n; i++){
            unsigned long long int staying_onCost = (moments[i+1]-moments[i])*onUnitCost;
            //staying on is costly -> just toggle on off[switch]
            if(staying_onCost > switchCost){
                if(charge <= switchCost){ //to avoid unsigned error -> end if charge may become <= 0
                    cout << "NO\n";
                    exitCode = true;
                    break;
                }
                charge -= switchCost;
            }
            //switching is costly -> just stay on
            else{
                if(charge <= staying_onCost){ //to avoid unsigned error -> end if charge may become <= 0
                    cout << "NO\n";
                    exitCode = true;
                    break;
                }
                charge -= staying_onCost;
            }
        }
        //marks already answer found -> no need to reprint
        if(!exitCode){
            if(charge > 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}