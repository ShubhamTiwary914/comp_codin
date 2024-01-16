//https://codeforces.com/problemset/problem/59/A
#include<iostream>
using namespace std;

int countUpper(string &word){
    int res=0;
    for(char ch: word){
        if(ch >= 'A' && ch <= 'Z')
            res++;
    }
    return res;
}



int main(){
    string word;
    cin >> word;

    int uppers = countUpper(word);
    int lowers = word.length()-uppers;

    bool convLower = true;
    if(uppers > lowers)
        convLower = false;

    for(int i=0; i<word.length(); i++){
        if(convLower){
            if(word[i] >= 'A' && word[i] <= 'Z')
                word[i] = (char)(word[i]+32);
        }else{
            if(word[i] >= 'a' && word[i] <= 'z')
                word[i] = (char)(word[i]-32);
        }
    }
    cout << word;
}