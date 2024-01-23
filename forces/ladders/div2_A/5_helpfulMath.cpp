#include<iostream>
using namespace std;

char getChar(int num){
    return  char(num+48);
}


int main(){
    string ops;
    cin >> ops;

    int count[] = {0,0,0};
    for(int i=0; i<ops.length(); i+=2)
        count[((int)(ops[i]))-48-1]++;
    
    string out;
    int turn = 1;
    bool first = true;


    while(turn <= 3){
        if(count[turn-1] <= 0){
            turn++;
        }
        else{
            if(first){
                out += getChar(turn);
                first = false;
            }
            else{
                out += '+';
                out += getChar(turn);
            }
            count[turn-1]--;
        }
    }
    cout << out;
}