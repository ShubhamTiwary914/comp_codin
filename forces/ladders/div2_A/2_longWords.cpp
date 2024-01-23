#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int k=0; k<t; k++){
        string word; cin >> word;
        if(word.length() > 10){
            char first = word[0], last = word[word.length()-1];
            cout << first + to_string(word.length()-2) + last << endl;
        }else{
            cout << word << endl;
        }
    }
}