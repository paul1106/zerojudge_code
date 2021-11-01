#include<iostream>
using namespace std;

int main(){
    int count, sum;
    sum = 0;
    while( cin >> count){
        for ( int i = 0; i <= count; i++){
            sum = sum + i;
        }
    cout << sum << endl;
    }





    return 0;
}