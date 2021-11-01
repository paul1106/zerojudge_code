#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c, x1, x2;
    while (cin >> a >> b >> c){
        if ( pow ( b, 2 ) - 4 * a * c > 0 ){
            x1 = (-b + sqrt ( b*b - 4*a*c) )/ 2 / a;
            x2 = (-b - sqrt ( b*b - 4*a*c) )/ 2 / a;
            cout << "Two different roots x1=" << x1 << " , x2=" << x2 << endl;
        }
        else if ( pow ( b, 2 ) - 4 * a * c == 0){
            cout << "Two same roots x=" << -b /( 2 * a) << endl;
        }
        else{
            cout << "No real root" << endl;
        }

    }
    return 0;
}