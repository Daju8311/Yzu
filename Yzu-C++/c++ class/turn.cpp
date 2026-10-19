#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "enter a string length: ";
    cin >> a;
    int *b = new int[a];
    int *c = b;
    cout << "enter a elements: ";
    for(int i = 0; i < a; i++){
        cin >> *c;
        c++;
    }
    cout << "the up side down elements are: ";
    for(int i = a-1; i >= 0; i--){
        cout << *(b + i) << " ";
    }
    delete[] b;
    return 0;
}