#include<iostream>
using namespace std;

int main(){
    int N;
    while (cin >> N){
    if ( N <= 10){
        cout << N * 6 << endl;
    }
    else if ( N > 10 && N <= 20){
        cout << 10 * 6 + ( N - 10 ) * 2 << endl;
    }
    else if ( N > 20 && N <= 40){
        cout << 10 * 6 + 10 * 2 + ( N - 20) << endl;
    }
    else{
        cout << 100 << endl;
    }
    }
    return 0;
    
}