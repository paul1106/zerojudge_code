#include<iostream>
using namespace std;

int main(){
    int hour, min;
    cin >> hour >> min;
    if ( (hour >= 17) || (hour == 7 && min < 30) || (hour <= 6)){
        cout << "Off School" << endl;
    }
    else{
        cout << "At School" << endl;
    }



    return 0;
}