#include <iostream>
#include <iomanip>
using namespace std;
float a;
float b;
float c;
int main() 
{
    cout << "Enter purchase amount:";
    cin>>a;
    b=a*0.1;
    cout<<"Discount amount:"<<fixed<<setprecision(2)<<b;
    c=a-b;
    cout<<"\nFinal amount:"<<fixed<<setprecision(2)<<c;
    return 0;
}