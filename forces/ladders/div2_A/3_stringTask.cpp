#include<iostream>
using namespace std;

bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch =='u' || ch == 'y')
        return true;
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch =='U' || ch == 'Y')
        return true;
    return false;
}

char getLower(char ch){
    if(ch >= 'A' && ch <= 'Z')
        ch = ch+32;
    return ch;
}


int main(){
    string word; cin >> word;
    string output = "";

    for(char ch: word){
        if(!isVowel(ch)){
            char low = getLower(ch);
            output += char('.');
            output += low;
        }
    }
    cout << output;
}