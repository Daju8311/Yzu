#include <iostream>
using namespace std;

int a, b, c;
int main()
{
    cout<<"type three random integers(1~100):"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c&&b>c){
        cout<<"largest:"<<a<<"\nsmallest:"<<c<<endl;
        if(a%2==0){
            cout<<"remainder:"<<a%c;
        }
    else{
         cout<<"sum:"<<a+c;
    }
    }

    if(a>b&&a>c&&c>b){
        cout<<"largest:"<<a<<"\nsmallest:"<<b<<endl;
        if(a%2==0){
            cout<<"remainder:"<<a%b;
        }
    else{
         cout<<"sum:"<<a+b;
    }
    }

    if(b>a&&b>c&&a>c){
        cout<<"largest:"<<b<<"\nsmallest:"<<c<<endl;
        if(b%2==0){
            cout<<"remainder:"<<b%c;
        }
    else{
         cout<<"sum:"<<b+c;
    }
    }
     if(b>a&&b>c&&c>a){
        cout<<"largest:"<<b<<"\nsmallest:"<<a<<endl;
        if(b%2==0){
            cout<<"remainder:"<<b%a;
        }
    else{
         cout<<"sum:"<<b+a;
    }
    }
    if(c>a&&c>b&&a>b){
        cout<<"largest:"<<c<<"\nsmallest:"<<b<<endl;
        if(c%2==0){
            cout<<"remainder:"<<c%b;
        }
    else{
         cout<<"sum:"<<b+c;
    }
    }
     if(c>a&&c>b&&b>a){
        cout<<"largest:"<<c<<"\nsmallest:"<<a<<endl;
        if(c%2==0){
            cout<<"remainder:"<<c%a;
        }
    else{
         cout<<"sum:"<<c+a;
    }
    }

    return 0;
}