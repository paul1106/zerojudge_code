#include<iostream>
using namespace std;

int main(){
    int N;
    char num;

    cin >> N;
    for ( int i = 1; i <= N; i++ ){
        cin.getline( num, 8);
        if ( num == "0 1 0 1"){
            cout << " A ";
        }
    }


    return 0;
}