#include <iostream>
using namespace std;
float a;
float b;
int main(){
    cout<<"Enter temperature in Celsius:";
    cin>>a;
    b=a*9/5+32;
    cout<<"Temperature in Fahrenheit:"<<b;
    return 0;
}