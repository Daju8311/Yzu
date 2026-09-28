#include <iostream>
using namespace std;
float a;
float b;
char c;
int main() 
{
    cout<<"輸入被除數"<<endl;
    cin>>a;
    cout<<"輸入除數"<<endl;
    cin>>b;
    cout<<"輸入運算子(+,-,*,/)"<<endl;
    cin>>c;
    switch(c){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        if(b==0){
            cout<<"除數錯誤";
        }
        else{cout<<a/b;}
        break;
        default:
        cout<<"運算子錯誤";
    }

    return 0;
}