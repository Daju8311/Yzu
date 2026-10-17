#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    int c = rand() % 100 + 1;
    int largest = a;
    int smallest = a;
    cout<<"Random numbers:"<<a<<" "<<b<<" "<<c<<endl;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest<<endl;
    if(largest%2==0){
        cout<<"Remainder:"<<largest % smallest;
    }
    else{
        cout<<"Sum:"<<smallest + largest;
    }
}    