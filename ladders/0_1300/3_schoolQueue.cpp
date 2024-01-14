//https://codeforces.com/problemset/problem/266/B
#include<iostream>
using namespace std;

int main(){
    int n, steps;
    cin >> n >> steps;

    char queue[n];
    for(int i=0; i<n; i++)
        cin >> queue[i];

    //count no of consecutive girls after boys
    int count = 0;
    int girlsCount[n];
    for(int i=n-1; i>= 0; i--){
        if(queue[i] == 'G'){
            girlsCount[i] = -1;
            count++;
        }
        else{
            girlsCount[i] = count;
            count = 0;
        }
    }

    //swap girls and boys depending on spaces present
    int lastMove = 0;
    for(int i=n-1; i>=0; i--){
        //last boy moves so spaces increases
        if(queue[i] == 'G')
            continue;
        girlsCount[i] += lastMove; 
        int j;
        if(girlsCount[i] < steps)
            j = girlsCount[i];
        else
            j = steps;
        lastMove = j;
        swap(queue[i], queue[i+j]);
    }

    //output
    for(int i=0; i<n; i++)
        cout << queue[i];
}


