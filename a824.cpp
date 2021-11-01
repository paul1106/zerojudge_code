#include<iostream>
using namespace std;

int main(){
    int a, b, c, sum;
    sum = 0;
    
    while( cin >> a >> b >> c ){
        for ( int i = 1; i <= c; i ++){
            if ( i % a == 0){
                sum = i + sum ;
            }
            else if ( i % b == 0){
                sum = i + sum;
            }
        }
        cout << char((sum % 26) + 64) << endl;
    }


    return 0;
}