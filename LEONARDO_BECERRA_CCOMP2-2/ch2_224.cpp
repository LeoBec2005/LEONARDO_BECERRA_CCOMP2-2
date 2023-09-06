#include <iostream>
#include <string>
using namespace std;

int main(){
    int number1= 3;
    int number2 = 5;
    int sum = number1 + number2;

    if (number1 % 2 == 0) {
        cout << number1 << " is even." << endl;
    }
    else {
        cout << number1 << " is odd." << endl;
    }

    if (number2 % 2 == 0) {
        cout << number2 << " is even." << endl;
    }
    else {
        cout << number2 << " is odd." << endl;
    }

    if (sum % 2 == 0) {
        cout << sum << " is even." << endl;
    }
    else {
        cout << sum << " is odd." << endl;
    }





    return 0;
}