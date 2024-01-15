//https://codeforces.com/problemset/problem/61/A
#include<iostream>
using namespace std;

int getNum(char ch){
    return ((int)ch)-48;
}

char getChar(int num){
    return (char)(num+48);
}


int main(){
    string n1, n2;
    cin >> n1 >> n2;

    int l1 = n1.length();
    int l2 = n2.length();

    int minLen = min(l1, l2);
    
    string res = "";
    int i = 0;
    for(; i<minLen; i++){
        int num1 = getNum(n1[i]);
        int num2 = getNum(n2[i]);
        int xorRes = num1^num2;
        res += getChar(xorRes);
    }

    //if n2 was minLen -> n1 has items remaining
    while(i < l1){
        res += n1[i];
        i++;
    }

    //if n1 was minLen -> n2 has items remaining
    while(i < l2){
        res += n2[i];
        i++;
    }

    cout << res;
}