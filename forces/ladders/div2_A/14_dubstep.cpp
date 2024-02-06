//https://codeforces.com/problemset/problem/208/A
#include<iostream>
using namespace std;



int main(){
    string word;
    cin >> word;

    string out = "";
    bool firstChar = true;

    int i=0;
    int n = word.length();

    while(i < n){
        if((i + 1 < n) &&  word[i] == 'W' && word[i+1] == 'U' && word[i+2] == 'B'){
            firstChar = true;
            i+=3;
        }
        else{
            if(firstChar){
                firstChar = false;
                out += " ";
            }
            out += word[i];
            i++;
        }
        
    }
    if(out.length() > 0)
        out = out.substr(1, out.length()-1); 
    cout << out;

    return 0;
}