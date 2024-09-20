#include<iostream>
using namespace std;

int ceiler(int n, int x){
    if(n % x == 0)
        return (n/x);
    return (n/x)+1;
}



int main(){
    int t; cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;

        //all follows 0-based here
        bool firstFound = false;
        int firstIndex = 0;
        int peak = 0;
        int peakIndex = 0;
        int starts[n];
        char ch;

        for(int i=0; i<n; i++){
            bool rowFound = false;
            int count = 0;

            for(int j=0; j<m; j++){
                cin >> ch;
                if(ch == '#'){
                    count++;
                    //first # ever
                    if(!firstFound){
                        firstFound = true;
                        firstIndex = i;
                    }
                    //first # in this row
                    if(!rowFound){
                        rowFound = true;
                        starts[i] = j;
                    }
                    //check for max 
                    if(count > peak){
                        peak = count;
                        peakIndex = i;
                    }
                }
            }
        }

        //calc res
        int mp = ceiler(peak, 2);
        int y = (firstIndex) + mp;
        int x = (starts[peakIndex]) + mp;

        cout << y << " " << x << endl;

    }
    return 0;
}