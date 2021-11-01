#include<iostream>
using namespace std;

int main (){
    int years;
    cin >> years;
    if ( years <6){
        cout << "免費" << endl;
    }
    else if ( years >=6 && years <= 11){
        cout << 590 << endl;
    }
    else if ( years >=12 && years <=17){
        cout << 790 << endl;
    }
    else if ( years >=18 && years <= 59){
        cout << 890 << endl;
    }
    else {
        cout << 399 << endl;
    }

    return 0;
}//(a>=6&&a<12)*590+(a>=12&&a<18)*790+(a>=18&&a<60)*890+(a>59)*399