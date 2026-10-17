#include <iostream>
using namespace std;
int a;
int main() {
    cout << "Enter an integer between 1 and 100:" << endl;
    cin >> a;
    if(a<=1){
        cout << a <<" is not a prime number. "<< endl;
        return 0;
    }
    bool b = true;
    for (int i = 2; i < a; i++) {
        if(a%i==0) {
            b = false;
            break;
        }
    }
    if(b) {
        cout << a <<" is a prime number. "<< endl;
    }
    else {
        cout << a <<" is not a prime number. "<< endl;
    }
    return 0;
}