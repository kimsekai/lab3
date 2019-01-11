#include <iostream>
using namespace std;

int main(){

    int x = 2;
    double sum=0;
    while(x<=69){
        sum = sum + (1.0/x);
        x = x+1;
    }
    cout << sum;
    return 0;
}