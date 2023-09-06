#include <iostream>
#include <string>
using namespace std;

int main(){
    int n1 = 3;
    int n2 = 12;
    int n3 = 50;
    int n4 = 30;
    int n5 = 11;

    if ((n1 > n2) && (n1 > n3) && (n1 > n4) && (n1 > n5)){
        cout << n1 << " is the largest number." << endl;
    }
    else if ((n2 > n1) && (n2 > n3) && (n2 > n4) && (n2 > n5)){
        cout << n2 << " is the largest number." << endl;
    }
    else if ((n3 > n2) && (n3 > n1) && (n3 > n4) && (n3 > n5)){
        cout << n3 << " is the largest number." << endl;
    }
    else if ((n4 > n2) && (n4 > n3) && (n4 > n1) && (n4 > n5)){
        cout << n4 << " is the largest number." << endl;
    }
    else if ((n5 > n2) && (n5 > n3) && (n5 > n4) && (n5 > n1)){
        cout << n5 << " is the largest number." << endl;
    }

    if ((n1 < n2) && (n1 < n3) && (n1 < n4) && (n1 < n5)){
        cout << n1 << " is the smallest number." << endl;
    }
    else if ((n2 < n1) && (n2 < n3) && (n2 < n4) && (n2 < n5)){
        cout << n2 << " is the smallest number." << endl;
    }
    else if ((n3 < n2) && (n3 < n1) && (n3 < n4) && (n3 < n5)){
        cout << n3 << " is the smallest number." << endl;
    }
    else if ((n4 < n2) && (n4 < n3) && (n4 < n1) && (n4 < n5)){
        cout << n4 << " is the smallest number." << endl;
    }
    else if ((n5 < n2) && (n5 < n3) && (n5 < n4) && (n5 < n1)){
        cout << n5 << " is the smallest number." << endl;
    }

    
    return 0;
}