#include <iostream>
using namespace std;
int a;
float b;
int main() 
{
    cout<<"Enter number of books:";
    cin>>a;
    cout<<"Enter price per book:";
    cin>>b;
    if(a<=4){
        cout<<"Total cost after discount:"<<a*b;
    }
    else if(5<=a&&a<=19){
        cout<<"Total cost after discount:"<<a*(b-b*0.04);
    }
    else if(20<=a&&a<=49){
        cout<<"Total cost after discount:"<<a*(b-b*0.07);
    }
    else{
        cout<<"Total cost after discount:"<<a*(b-b*0.12);
    }
    return 0;
}