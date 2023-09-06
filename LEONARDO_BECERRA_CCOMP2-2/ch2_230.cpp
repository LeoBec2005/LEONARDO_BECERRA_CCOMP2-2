#include <iostream>
#include <string>
using namespace std;

int main(){

float meters;
int kilograms;
int BMI;

cout<<"Enter your weight in kilograms: ";
cin>>kilograms;
cout<<"Enter your height in meters: ";
cin>>meters;
BMI = kilograms / (meters * meters);

if (BMI < 18.5)
    cout<<"Your BMI is "<<BMI<<"\nYou are underweight"<<endl;
else if (BMI < 25)
    cout<<"Your BMI is "<<BMI<<"\nYou are normal"<<endl;
else if (BMI < 30)
    cout<<"Your BMI is "<<BMI<<"\nYou are overweight"<<endl;
else
    cout<<"Your BMI is "<<BMI<<"\nYou are obese"<<endl;

    return 0;
}