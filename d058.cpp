#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    if ( num > 0){
        cout << 1 << endl;
    }
    else if ( num == 0 ){
        cout << 0 << endl;
    }
    else{
        cout << -1 << endl;
    }


    return 0;
}