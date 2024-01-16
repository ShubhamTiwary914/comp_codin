#include<iostream>
#include<vector>
using namespace std;


int getNum(char ch){
    return ((int)ch)-48;
}


int main(){
    int year; cin >> year;
    vector<int> digits(10, 0);
    while(true){
        year++;
        string temp = to_string(year);
        bool distinct = true;
        //put digits in array
        for(int i=0; i<4; i++){
            digits[getNum(temp[i])]++;
            if(digits[getNum(temp[i])] > 1){
                distinct = false;
                break;
            }
        }
        //check if distinct
        if(distinct){
            cout << year;
            break;
        }
        for(int i=0; i<10; i++)
            digits[i] = 0;
    }
}