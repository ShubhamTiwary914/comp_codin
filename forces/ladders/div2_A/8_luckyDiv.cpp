#include<iostream>
using namespace std;

bool checklucky(int num){
    while(num > 0){
        int k = num%10;
        if(!(k == 4 || k == 7))
            return false;
        num = num/10;
    }
    return true;
}



int main(){
    int num; cin >> num;
    if(checklucky(num)){
        cout << "YES";
        return 0;
    }

    if(num % 4 == 0 || num % 7 == 0)
        cout << "YES";
    else    
        cout << "NO";
    return 0;
}