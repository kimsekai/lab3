#include <iostream>
using namespace std;
int main(){
    int count = 0,N;
    string text1,text2;
    cout << "Enter the first text :";
    cin >> text1;
    cout << "Enter the second text :";
    cin >> text2;
    cout << "Enter N:";
    cin >> N;
    while(count<N){
        if(count%2==0){
            cout << text1<<"  ";
        }else{
            cout << text2<<"  ";
        }
        count = count + 1;

    }
return 0;
}

