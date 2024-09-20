//https://codeforces.com/problemset/problem/110/A
#include<iostream>
using namespace std;


bool isLucky(unsigned long long int summ){
    if(summ == 0)
        return false;
    while(summ > 0){
        int rem = summ%10;
        if(!(rem == 4 || rem == 7))
            return false;
        summ = summ / 10;
    }
    return true;
}


int main(){
    string num;
    cin >> num;

    unsigned long long int fours = 0, sevens = 0;
    for(char k: num){
        if(k == '4')
            fours++;
        else if(k == '7')
            sevens++;
    }
    if(isLucky(fours+sevens))
        cout << "YES";
    else
        cout << "NO";
}