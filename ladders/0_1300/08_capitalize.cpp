//https://codeforces.com/problemset/problem/281/A
#include<iostream>
using namespace std;

int main(){
    string word;
    cin >> word;

    if(word[0] >= 'a' && word[0] <= 'z')
        word[0] = (char)(word[0]-32);
    cout << word;
}