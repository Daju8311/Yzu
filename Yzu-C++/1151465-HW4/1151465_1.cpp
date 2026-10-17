#include <iostream>
using namespace std;
int palindrome(int a){
    int b = 0;
    for(int i = a; i > 0; i /= 10) {
        int c = i % 10;
        b=b * 10 + c;
    }
    return b;
}
int main() {
    int a;
    int b;
    cout << "Enter a positive integer:";
    cin >> a;
    b = palindrome(a);
    cout << b << " is" << (a == b ? " " : " not ") << "a palindrome.";
    return 0;
}