//https://codeforces.com/problemset/problem/32/B
#include<iostream>
using namespace std;



int main(){
    string word;
    string output = "";
    cin >> word;

    int i =0;
    while(i<word.length()){
        if(word[i] == '.'){
            output += "0";
            i++;
        }
        if(i >= word.length())
            break;
        else if(word[i] == '-'){
            if(word[i+1] == '.'){ //1
                output += "1";
                i+=2;
            }else if(word[i+1] == '-'){  //2
                output += "2";
                i+=2;
            }
        }
    }
    cout << output;
    return 0;
}