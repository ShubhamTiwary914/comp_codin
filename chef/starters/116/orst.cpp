//https://www.codechef.com/problems/SRTO3
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int testcases;  cin >> testcases;
    for(int testcase=0; testcase<testcases; testcase++){
        //INPUT
        int aSize, bSize;
        cin >> aSize >> bSize;
        
        int arr[aSize], ref[bSize];
        for(int i=0; i<aSize; i++)
            cin >> arr[i];
            
        int maxSuffix = 1;
        for(int i=0; i<bSize; i++){
            cin >> ref[i];
            if(ref[i] > maxSuffix)
                maxSuffix = ref[i];
        }
            
        //Sort using minHeap pq
        priority_queue<int> maxHeap;
        int index = aSize-1;
        for(int i=0; i<maxSuffix; i++){
            maxHeap.push(arr[index]);
            index--;
        }
        
        //put back onto arr
        index = aSize-1;
        for(int i=0; i<maxSuffix; i++){
            int largest = maxHeap.top();
            arr[index] = largest;
            maxHeap.pop();
            index--;
        }
            
        //OUTPUT
        for(int i=0; i<aSize; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
	return 0;
}
