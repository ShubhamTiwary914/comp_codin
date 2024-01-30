//https://codeforces.com/contest/514/problem/A
#include<iostream>
using namespace std;

int invert(char ch){
    int digit = ((int)ch)-48;
    return 9-digit;
}



int main(){
    string num; cin >> num;
    for(int i=0; i<num.length(); i++){
        if(num[i] >= '5' && num[i] <= '9')
            num[i] = (char)(invert(num[i]) + 48);
    }

    //for trailing zeroes
    string output = "";
    bool ended = false;
    for(int i=0; i<num.length(); i++){
        if(!ended && num[i] != '0')
            ended = true;
        if(ended)
            output += num[i];
    }

    if(!ended)
        output = '0';

    cout << output;
    
    return 0;
} 
