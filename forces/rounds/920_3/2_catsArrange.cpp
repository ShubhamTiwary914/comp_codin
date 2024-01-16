#include<iostream>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        int n; cin >> n;
        string curr, goal;
        cin >> curr >> goal;

        //toRemove -> make 1 to 0,  toAdd -> make 0 to 1
        int toRemove = 0, toAdd = 0; 
        for(int i=0; i<n; i++){
            if(curr[i] != goal[i]){
                if(curr[i] == '1'  && goal[i] == '0') //remove
                    toRemove++;
                else if(curr[i] == '0' && goal[i] == '1') //add
                    toAdd++;
            }
        }

        //now calculate days
        int maxx = max(toRemove, toAdd);
        int minn = min(toRemove, toAdd);

        int non_swap = maxx - minn;
        int swap = maxx - non_swap;
        int days = non_swap + swap;
        cout << days << endl;
    }
}