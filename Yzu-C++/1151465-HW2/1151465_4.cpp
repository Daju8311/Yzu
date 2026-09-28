#include <iostream>
using namespace std;
float a;
int b;
int main() 
{
    cout<<"Enter package weight (kg):";
    cin>>a;
    cout<<"Enter last digit of tracking number:";
    cin>>b;
    if(0<=a&&a<=2){
        if(b==0||b==1||b==2){
            cout<<"Shipping fee:"<<5;
        }
        else if(b==3||b==4||b==5||b==6){
            cout<<"Shipping fee:"<<5+2;
        }
        else if(b==7||b==8||b==9){
            cout<<"Shipping fee:"<<5+5;
        }
        else{
            cout<<"wrong number";
        }
    }
    else if(2<a&&a<=5){
        if(b==0||b==1||b==2){
            cout<<"Shipping fee:"<<8;
        }
        else if(b==3||b==4||b==5||b==6){
            cout<<"Shipping fee:"<<8+2;
        }
        else if(b==7||b==8||b==9){
            cout<<"Shipping fee:"<<8+5;
        }
        else{
            cout<<"wrong number";
        }
    }
     else if(5<a&&a<=10){
        if(b==0||b==1||b==2){
            cout<<"Shipping fee:"<<12;
        }
        else if(b==3||b==4||b==5||b==6){
            cout<<"Shipping fee:"<<12+2;
        }
        else if(b==7||b==8||b==9){
            cout<<"Shipping fee:"<<12+5;
        }
        else{
            cout<<"wrong number";
        }
    }
    else if(a>10){
        if(b==0||b==1||b==2){
            cout<<"Shipping fee:"<<18;
        }
        else if(b==3||b==4||b==5||b==6){
            cout<<"Shipping fee:"<<18+2;
        }
        else if(b==7||b==8||b==9){
            cout<<"Shipping fee:"<<18+5;
        }
        else{
            cout<<"wrong number";
        }
    }
    else{
        cout<<"wrong package weight number";
    }
    return 0;
}