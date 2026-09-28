#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
string a, b, c;
int d, e, f;
int main() 
{
    cout<<"Enter student 1:";
    cin>>a;
    cout<<"Enter score 1:";
    cin>>d;
    
    cout<<"Enter student 2:";
    cin>>b;
    cout<<"Enter score 2:";
    cin>>e;
    
    cout<<"Enter student 3:";
    cin>>c;
    cout<<"Enter score 3:";
    cin>>f;
    
    cout<<setw(20)<<left<<"student Name"<<setw(10)<<"Score"<<endl
    <<setw(20)<<left<<a<<setw(10)<<d<<endl
    <<setw(20)<<left<<b<<setw(10)<<e<<endl
    <<setw(20)<<left<<c<<setw(10)<<f;

    return 0;
}