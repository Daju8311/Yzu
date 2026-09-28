#include <iostream>
using namespace std;
int a;
int main() 
{
    cout<<"Enter total number of seconds:";
    cin>>a;
    cout<<"Hours:"<<a/3600<<"\n"<<"Minutes:"<<a%3600/60<<"\n"<<"Seconds:"<<a%60;
    return 0;
}