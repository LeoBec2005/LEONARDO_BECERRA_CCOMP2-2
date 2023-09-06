#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1 = 4;
    int n2 = 10;
    int n3 = 12;

    if (n3 % n1 == 0){
        cout << n1 << " is a factor of " << n3 << endl;
    }
    else {
        cout << n1 << " is not a factor of " << n3 << endl;
    }

    if (n3 % n2 == 0){
        cout << n2 << " is a factor of " << n3 << endl;
    }
    else {
        cout << n2 << " is not a factor of " << n3 << endl;
    }

    return 0;
}