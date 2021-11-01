#include<iostream>
using namespace std;

int main(){
    long long int num_1, num_2;
    while (cin >> num_1 >> num_2){
    if ( num_1 > num_2){
        cout << num_1 - num_2 << endl;
    }
    else{
        cout << num_2 - num_1 << endl;
    }
    }


    return 0;
}