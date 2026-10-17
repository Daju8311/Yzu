#include <iostream>
using namespace std;
bool b(int n){
    if(n<2){
        return false;
    }
    for(int i = 2; i < n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}
void p(int a){
    for(int i = 2; i < a/2; i++) {
        int j=  a-i;
        if(b(i) && b(j)){
            cout<<a<<"="<<i<<"+"<<j<<endl;
        }
    }
}        
int main(){
    cout<<"Enter an even integer between 4 and 1000:";
    int a;
    cin>>a;
    p(a);
    return 0;
}