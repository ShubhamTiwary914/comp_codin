#include<iostream>
#include<bitset>
using namespace std;



int main(){
    bitset<16> b("000100");
    b.flip(1);

    cout << b << endl;
    return 0;

}