#include<iostream>
using namespace std;

int main(){
    string word;
    cin >> word;

    string ref = "hello";
    int k = 0;

    for(int i=0; i<word.length(); i++){
        if(word[i] == ref[k])
            k++;
    }

    cout << ((k >= ref.length()) ? "YES" : "NO");
    return 0;
}