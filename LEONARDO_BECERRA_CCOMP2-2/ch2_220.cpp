#include <iostream>
#include <string>
using namespace std;

int main(){
    int radius = 2;
    int diameter = 2 * radius;
    int circumference = 2 * 3.14159 * radius;
    int area= 3.14159 * radius * radius;
    
    cout << "The diameter is " << diameter << endl;
    cout << "The circumference is " << circumference << endl;
    cout << "The area is " << area << endl;

    return 0;
}