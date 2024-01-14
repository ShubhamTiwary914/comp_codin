#include<iostream>
using namespace std;

int getNum(char ch){
    return ((int)ch)-48;
}

char getChar(int num){
    return (char)(num+48);
}

int main(){
    string year;
    cin >> year;
    
    int digits[10] = {0,0,0,0,0,0,0,0,0,0};
    for(int i=0; i<4; i++)
        digits[getNum(year[i])]++;

    for(int i=0; i<10000; i++){
        //make nums with 9s at end gone if exists
        int j = 3;
        for(; j>=1; j--){
            if(year[j] == '9'){
                year[j] = '0';
                digits[9]--;
                digits[0]++;
                if(year[j-1] != '9'){
                    j = j-1;
                    break;
                }
            }else
                break;
        }
        //else add by 1 the element after 9s
        int k = getNum(year[j]);
        digits[k]--;
        digits[k+1]++;
        year[k] = getChar(k+1);

        bool found = true;
        for(int i=0; i<10; i++){
            if(digits[i] > 1){
                found = false;
                break;
            }
        }
        if(found){
            cout << year;
            break;
        }
    }
    return 0;
}