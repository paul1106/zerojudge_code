#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double F; 

    cin >> F;
    cout << fixed << setprecision(3) << ((F - 32) * 5/9 )<< endl;



    return 0;
}