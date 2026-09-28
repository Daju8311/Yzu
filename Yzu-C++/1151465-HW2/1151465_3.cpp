#include <iostream>
using namespace std;
char w;
float x;
int main() 
{
    cout<<"Enter ticket type (a, c, or s):";
    cin>>w;
    cout<<"Enter number of tickets:";
    cin>>x;
    switch(w){
        case 'a':
        cout<<"Total ticket cost:"<<4*x;
        break;
        case 'c':
        cout<<"Total ticket cost:"<<2*x;
        break;
        default:
        cout<<"Total ticket cost:"<<3*x;
    }
    return 0;
}