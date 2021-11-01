#include<iostream>
using namespace std;

int main(){
    long long int n, k;
    while (cin >> n >> k){
    if ( n%k == 0 && k != 0){
        cout << "Ok!" << endl;
    
    }
    else{
        cout << "Impossib1e!" << endl;
    }
    }

    return 0;
}