#include <iostream>
#include <string>
using namespace std;

int main(){
    int number4digits;
    cout<<"Enter a four-digit integer: ";
    cin>>number4digits;
    int n1 = number4digits / 1000;
    int n2 = number4digits / 100 % 10;
    int n3 = number4digits / 10 % 10;
    int n4 = number4digits % 10;
    cout<<n4<<"  "<<n3<<"  "<<n2<<"  "<<n1<<endl;

    return 0;
}