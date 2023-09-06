#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter a character: ";
    char character;
    cin >> character;
    cout << "The ASCII value of " << character << " is " << static_cast<int>(character) << endl;

    return 0;
}