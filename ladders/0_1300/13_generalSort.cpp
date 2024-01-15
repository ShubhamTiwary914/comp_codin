//https://codeforces.com/problemset/problem/144/A
#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int firstMax = -1e9, lastMin = 1e9;
    int maxIndex = 0, minIndex = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > firstMax){
            firstMax = arr[i];
            maxIndex = i;
        }
        if(arr[i] <= lastMin){
            lastMin = arr[i];
            minIndex = i;
        }
    }


    //now to move smaller to end & larger to start
    int smallerMoves = (n-1-minIndex);
    int largerMoves = maxIndex;
    //case->they overlap as smaller pos < larger pos -> move min first so larger comes 1 step back;
    if(minIndex < maxIndex)
        largerMoves--;
    
    cout << (smallerMoves + largerMoves);
    return 0;
}