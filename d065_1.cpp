#include<iostream>
using namespace std;

int main(){
    int num_1, num_2, num_3, maximum;
    cin >> num_1 >> num_2 >> num_3;
    maximum = num_1;

    if ( num_2 > maximum ){
        maximum = num_2;
    }
    if ( num_3 > maximum ){
        maximum = num_3;
    }

    cout << maximum << endl;

    return 0;

}