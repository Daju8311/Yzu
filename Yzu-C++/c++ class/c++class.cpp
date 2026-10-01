#include <iostream>
using namespace std;
int main() {
    int a=0;
    for(int i=0;i<=100;i++){
        int a=i;
        int b=a%100;
        int c=(a/10)%10;
        int d=a/100;
        if(a%3!=0){
            if((b+c+d)%2==0){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}