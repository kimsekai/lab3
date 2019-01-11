#include <iostream>
using namespace std;

int main(){

    int x = 6;
    double sum=0;
    while(x<=19){
        sum = sum + (1.0/x);
        x = x+1;
    }
    cout << sum;
    return 0;
}