//https://codeforces.com/problemset/problem/151/A
#include<iostream>
using namespace std;



int main(){
    int friends, bottles, ml, limes, slices, salt, drinkNeed, saltNeed;
    cin >> friends >> bottles >> ml >> limes >> slices >> salt >> drinkNeed >> saltNeed;

    int drinksPos = ((bottles*ml)/drinkNeed);
    int limesPos = limes*slices;
    int saltsPos = (salt/saltNeed);

    int total = (min(drinksPos, min(limesPos, saltsPos)))/friends;

    cout << total;
    return 0;
} 
