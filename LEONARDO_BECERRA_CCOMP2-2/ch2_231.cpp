#include <iostream>
#include <string>
using namespace std;

int main(){
    int miles;
    int gallons;
    int milesPerGallon;
    int fees;
    int tolls;
    int totalCost = (miles / milesPerGallon) * gallons + fees + tolls;

    cout<<"Enter total miles driven per day: ";
    cin>>miles;
    cout<<"Enter cost per gallon of gasoline: ";
    cin>>gallons;
    cout<<"Average miles per gallon: ";
    cin>>milesPerGallon;
    cout<<"Enter tolls per day: ";
    cin>>tolls;
    cout<<"Enter parking fees per day: ";
    cin>>fees;

    cout<<"Your daily driving cost is $"<<totalCost<<endl;




    return 0;
}