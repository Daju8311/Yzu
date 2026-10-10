#include <iostream>
using namespace std;
int a;
int main() {
    cout <<"Enter a positive integer:" ;
    cin >> a;
    cout << "The reverse of the number is: ";
    while (a > 0) {
        cout << (a%10);
        a = a/10;
    }
    cout<< endl;
    return 0;
}