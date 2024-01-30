//https://codeforces.com/problemset/problem/723/A
#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[3];
    for(int i=0; i<3; i++)
        cin >> nums[i];
    sort(nums, nums+3);

    cout << (abs(nums[1] - nums[0]) + abs(nums[2] - nums[1]));


    return 0;
}