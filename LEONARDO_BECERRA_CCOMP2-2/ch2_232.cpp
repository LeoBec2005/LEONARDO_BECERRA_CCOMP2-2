#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;

    cout<<"Enter your age: ";
    cin>>age;
    int mhr1 = 220 - age;
    int mhr2 = 208 - 0.7*age;
    int mhr3 = 207 - 0.7*age;
    int mhr4 = 211 - 0.64*age;

    cout<<"These are your suggested values "<<mhr1<<","<<mhr2<<","<<mhr3<<" and "<<mhr4<<endl;

    int max;
    int min;
    if ((mhr1 > mhr2) && (mhr1 > mhr3) && (mhr1 > mhr4)){
        mhr1 = max;
        }
    else if ((mhr2 > mhr1) && (mhr2 > mhr3) && (mhr2 > mhr4)){
        mhr2 = max;
        }
    else if ((mhr3 > mhr2) && (mhr3 > mhr1) && (mhr3 > mhr4)){
        mhr3 = max;
        }
    else if ((mhr4 > mhr2) && (mhr4 > mhr3) && (mhr4 > mhr1)){
        mhr4 = max;
        }

    if ((mhr1 < mhr2) && (mhr1 < mhr3) && (mhr1 < mhr4)){
        mhr1 = min;
        }
    else if ((mhr2 < mhr1) && (mhr2 < mhr3) && (mhr2 < mhr4)){
        mhr2 = min;
        }
    else if ((mhr3 < mhr2) && (mhr3 < mhr1) && (mhr3 < mhr4)){
        mhr3 = min;
        }
    else if ((mhr4 < mhr2) && (mhr4 < mhr3) && (mhr4 < mhr1)){
        mhr4 = min;
        }

    cout<<"You should consider "<<min<<" to "<<max<<endl;

    return 0;
}