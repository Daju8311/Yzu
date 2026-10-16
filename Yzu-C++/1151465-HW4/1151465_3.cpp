#include <iostream>
using namespace std;
int p(int a){
    int b = 0;
    for(int i = a; i > 0; i /= 10) {
        int c = i % 10;
        b = b * 10 + c;
    }
    if(b<2){
        return 0;
    }
    for(int i = 2; i < b; i++) {
        if(b % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int a;
    cout << "Enter an integer between 1 and 1000:";
    cin >> a;
    cout << a << " is" << (p(a)==1 ? " " : " not ")  << "an emirp.";
    return 0;
}