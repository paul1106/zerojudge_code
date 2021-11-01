#include<iostream>
using namespace std;

int main(){
    int count , sum ;  
    sum = 0;
    while (cin >> count){
        for ( int i = 1; i <= count; i +2){
            sum =+ i;
        }
        cout << (sum - 1)*3 << endl;
    }

    



    return 0;
}